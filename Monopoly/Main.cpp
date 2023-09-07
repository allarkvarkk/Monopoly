#include <iostream>
#include "Game.h"




int main() {
	using namespace sf;
	//Initialize game
	Game game;



	while (game.running()) {

		



		//Update 
		game.update();
		//Render
		game.render();


	}

	return 0;
}