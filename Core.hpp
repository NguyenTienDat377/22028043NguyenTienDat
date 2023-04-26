//
//  Core.hpp
//  FirstProject
//
//  Created by Nguyen Tien Dat on 20/04/2023.
//

#ifndef Core_hpp
#define Core_hpp

#include <iostream>
#include <SDL2/SDL.h>
#include <SDL2_image/SDL_image.h>
#include <SDL2_ttf/SDL_ttf.h>
#include "LTexture.hpp"


static SDL_Window* window = NULL;

static SDL_Renderer* renderer = NULL;

static TTF_Font* font = NULL;

static int WINDOW_WIDTH = 720;

static int WINDOW_HEIGHT = 480;

bool checkCollisionPlayerPlat(SDL_Rect a, SDL_Rect b);

bool isRunning(SDL_Event &e);

void displayMessage();

#endif /* Core_hpp */
