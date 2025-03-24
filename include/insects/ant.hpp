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
  public:
	static std::unique_ptr<std::vector<Ant>> ants;

  private:
	SDL_Surface *loadedSurface;
	SDL_Texture *texture;

	float size = 10;
	float angle = 45;
	SDL_FRect shape{pos.x, pos.y, size *scaleFactor / 1.1f, size *scaleFactor};

  public:
	Ant(vector _pos);
	void addAnt();
	void render(SDL_Renderer *renderer);
};

#endif /* ENTOSYSTEM_ANT_HPP */
