#pragma once
//
//  MazeItem.h
//  CS172
//
//  Created by Stephen Johnson on 11/22/16.
//  Copyright © 2016 Glacier Peak Studios LLC. All rights reserved.
//

#ifndef MazeItem_h
#define MazeItem_h

#include <stdio.h>

class MazeItem {
public:
	virtual void render();
	virtual bool isPermeable();
};

#endif /* MazeItem_hpp */

