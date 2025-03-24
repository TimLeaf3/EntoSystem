//
//  terrain.hpp
//  EntoSystem
//
//  Created by Tim Le Flem on 23/03/2025.
//

#ifndef ENTOSYSTEM_TERRAIN_HPP
#define ENTOSYSTEM_TERRAIN_HPP

#include "game.hpp"
#include "includes.hpp"
#include "terrain.hpp"

class Terrain {

  public:
	constexpr static int tileSize = 16;

	SDL_FRect shape;

	SDL_Surface *loadedTexture;
	SDL_Texture *dirt;

	void init();
	void generate(SDL_Renderer *renderer);

}; // namespace ter

#endif /* ENTOSYSTEM_TERRAIN_HPP */
