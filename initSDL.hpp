//
//  initSDL.hpp
//  FirstProject
//
//  Created by Nguyen Tien Dat on 17/04/2023.
//

#ifndef initSDL_hpp
#define initSDL_hpp

#include <iostream>
#include <SDL2/SDL.h>
#include <SDL2_image/SDL_image.h>
#include "Core.hpp"

static LTexture playerRightTexture, playerLeftTexture;
static LTexture backgroundTexture;
static LTexture platformTexture;
static LTexture loseMessage;

bool initSDL(const char* windowName,int WIDTH,int HEIGHT);

bool loadMedia();

#endif /* initSDL_hpp */
