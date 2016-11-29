#pragma once
//
//  MazeWall.hpp
//  CS172
//
//  Created by Stephen Johnson on 11/22/16.
//  Copyright © 2016 Glacier Peak Studios LLC. All rights reserved.
//

#ifndef MazeWall_hpp
#define MazeWall_hpp

#include <stdio.h>
#include "MazeItem.h"

class MazeWall : public MazeItem
{
private:
	bool mHorizontal;
public:
	MazeWall(bool horz);
	virtual void render();
};

#endif /* MazeWall_h */