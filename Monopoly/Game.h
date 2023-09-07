#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>

class Game
{
private:
	//Variables and window
	sf::RenderWindow* window;
	sf::Event event;
	//mouse position
	sf::Vector2i mousePositionWindow;

	//Game objects
	std::vector<sf::RectangleShape> enemies;
	sf::RectangleShape enemy;

	//Private functions
	void initializeVariables();
	void initializeWindow();
	void initializeEnemies();

public:
	//Constructors / Destructors
	Game();
	virtual ~Game();
	//accessors
	const bool running() const;
	//Functions
	void pollEvents();
	void updateMousePosition();
	void update();
	void render();
};
//Functions
