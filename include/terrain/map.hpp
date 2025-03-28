//
//  map.hpp
//  Terrain_Generation_SDL3
//
//  Created by Tim Le Flem on 26/03/2025.
//

#ifndef TERRAIN_GENERATION_MAP_HPP
#define TERRAIN_GENERATION_MAP_HPP

#include "includes.hpp"

struct Map {

  private:
	std::vector<std::vector<int>> grid; // A 2D vector N²

  public:
	/** Initializes a map instace */
	Map(const std::vector<std::vector<int>> &grid);

	/** @param x the X coordinate
	 *  @param y the Y coordinate
	 *	@return the memory address of
	 *		the int at (x, y) coordinates */
	int &at(std::size_t x, std::size_t y);

	/** @param x the X coordinate
	 *  @param y the Y coordinate
	 *	@return the value of the int at (x, y) coordinates */
	const int &at(std::size_t x, std::size_t y) const;

	size_t size() const { return grid.size(); }
	size_t sizeAt(int i) const { return grid[i].size(); }

	void render(SDL_Renderer *renderer);
};

std::ostream &operator<<(std::ostream &os, const Map &map);

#endif /* TERRAIN_GENERATION_MAP_HPP */
