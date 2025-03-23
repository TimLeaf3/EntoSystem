//
//  includes.hpp
//  EntoSystem
//
//  Created by Tim Le Flem on 22/03/2025.
//

#ifndef ENTOSYSTEM_INCLUDES_HPP
#define ENTOSYSTEM_INCLUDES_HPP

#include <SDL3/SDL.h>
#include <SDL3_image/SDL_image.h>

#include <filesystem>
#include <fstream>
#include <iostream>

namespace fs = std::filesystem;

using std::cout, std::cerr, std::endl;
using std::string, std::ios;

struct vector {
	float x, y;
	vector(float _x = 0.f, float _y = 0.f) : x(_x), y(_y) {}
};

#endif /* ENTOSYSTEM_INCLUDES_HPP */
