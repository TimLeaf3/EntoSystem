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
	Insect(vector _pos) : pos(_pos) {}
};

#endif /* ENTOSYSTEM_INSECT_HPP */
