//
//  game.hpp
//  EntoSystem
//
//  Created by Tim Le Flem on 22/03/2025.
//

#ifndef game_hpp
#define game_hpp

#include "includes.hpp"

struct Game {
  private:
	SDL_Window *window;
	SDL_Renderer *renderer;

	SDL_Color back{33, 38, 49};
	SDL_Event event;
	bool runs{false};

	vector windowSize{800, 600};

  public:
	int loop();

	bool init();

	void handleEvents();
	void update();
	void render();

	void close();
};

#endif /* game_hpp */
