//
//  game.hpp
//  EntoSystem
//
//  Created by Tim Le Flem on 22/03/2025.
//

#ifndef ENTOSYSTEM_GAME_HPP
#define ENTOSYSTEM_GAME_HPP

#include "includes.hpp"
#include "insect.hpp"
#include "map.hpp"

struct Game {
  public:
	static SDL_Window *window;
	static SDL_Renderer *renderer;

  private:
	SDL_Color back{33, 38, 49};
	SDL_Event event;
	bool runs{false};

	const static vector windowSize;

  public:
	int loop();

	bool init();

	void handleEvents();
	void update();
	void render();

	void close();

	//
	static float w() { return Game::windowSize.x; }
	static float h() { return Game::windowSize.y; }
};

#endif /* ENTOSYSTEM_GAME_HPP */
