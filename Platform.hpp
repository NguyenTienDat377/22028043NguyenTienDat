//
//  Platform.hpp
//  FirstProject
//
//  Created by Nguyen Tien Dat on 20/04/2023.
//

#ifndef Platform_hpp
#define Platform_hpp

#include <iostream>
#include <SDL2/SDL.h>
#include <SDL2_image/SDL_image.h>
#include "Core.hpp"
#include "initSDL.hpp"

class Platform{
    int PPosX,PPosY;
    
    SDL_Rect PCollider;
public:
    Platform();
    
    Platform(int x, int y);
    
    SDL_Rect getCollider();
    
    void render();
    
    void setterPlatform(int _x, int _y);
    
};

#endif /* Platform_hpp */
