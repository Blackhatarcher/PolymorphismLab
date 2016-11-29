#pragma once
//
//  Character.hpp
//  CS172
//
//  Created by Stephen Johnson on 11/22/16.
//  Copyright © 2016 Glacier Peak Studios LLC. All rights reserved.
//

#ifndef Character_h
#define Character_h

#include <stdio.h>
#include "MazeItem.h"

class Character : public MazeItem
{
public:
	virtual void render();
};

#endif /* Character_h */
