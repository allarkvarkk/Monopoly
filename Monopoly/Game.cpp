#include "Game.h"

void Game::initializeVariables() {
	this->window = nullptr;
}
void Game::initializeWindow() {
	using namespace sf;
	this->window = new RenderWindow(VideoMode::getDesktopMode(), "Monopoly Test", Style::Titlebar | Style::Close);
	this->window->setFramerateLimit(144);
}

void Game::initializeEnemies() {
	using namespace sf;
	this->enemy.setPosition(400, 400);
	this->enemy.setSize(Vector2f(100.f, 100.f));
	this->enemy.setFillColor(Color::Blue);
	this->enemy.setOutlineColor(Color::Green);
	this->enemy.setOutlineThickness(1.f);
}




Game::Game() {
	this->initializeVariables();
	this->initializeWindow();
	this->initializeEnemies();
}
Game::~Game() {
	delete this->window;
}

const bool Game::running() const {
	return this->window->isOpen();
}
void Game::pollEvents() {
	while (this->window->pollEvent(this->event)) {
		switch (event.type) {
		case sf::Event::Closed:
			this->window->close();
			break;
		}
	}
}

void Game::updateMousePosition()
{
	this->mousePositionWindow = sf::Mouse::getPosition(*this->window);
}

void Game::update() {
	this->pollEvents();
	this->updateMousePosition();

	//update mouse pos
}

void Game::render() {
	/*
	~ clear old frame
	~ render objects
	~ display frame in window

	Renders the game objects
	*/
	this->window->clear();
	//Draw Game
	this->window->draw(this->enemy);
	this->window->display();

}
