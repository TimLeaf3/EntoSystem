//
//  insect.hpp
//  EntoSystem
//
//  Created by Tim Le Flem on 23/03/2025.
//

#ifndef ENTOSYSTEM_INSECT_HPP
#define ENTOSYSTEM_INSECT_HPP

#include "game.hpp"
#include "includes.hpp"

class Insect {
  protected:
	vector pos{0, 0};

  public:
	static std::unique_ptr<std::vector<Insect>> insects;

	Insect(vector _pos) : pos(_pos) {}
	static void render(SDL_Renderer *renderer);
};

#endif /* ENTOSYSTEM_INSECT_HPP */
