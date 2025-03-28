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

class Ant : public Insect {
  public:
	static std::unique_ptr<std::vector<std::unique_ptr<Ant>>> ants;

  private:
	SDL_Surface *loadedSurface;
	SDL_Texture *texture;

	float size = 10;
	float angle = 0;
	SDL_FRect shape{pos.x, pos.y, (size * scaleFactor) * 0.9f,
	                (size * scaleFactor)};

  public:
	Ant(vector _pos);

	static std::unique_ptr<Ant> create(vector _pos) {
		return std::make_unique<Ant>(_pos);
	}

	void addAnt();
	void render(SDL_Renderer *renderer);
	void rotate(float _angle) { angle = _angle; }
};

#endif /* ENTOSYSTEM_ANT_HPP */
