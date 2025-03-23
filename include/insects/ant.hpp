//
//  ant.hpp
//  EntoSystem
//
//  Created by Tim Le Flem on 23/03/2025.
//

#ifndef ENTOSYSTEM_ANT_HPP
#define ENTOSYSTEM_ANT_HPP

#include "game.hpp"
#include "includes.hpp"
#include "insect.hpp"

class Ant : Insect {
  private:
	SDL_Texture *texture;

  public:
	Ant(vector _pos) : Insect(_pos) {}
	void render(SDL_Renderer *renderer);
};

#endif /* ENTOSYSTEM_ANT_HPP */
