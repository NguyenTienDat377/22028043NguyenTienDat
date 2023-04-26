//
//  Platform.cpp
//  FirstProject
//
//  Created by Nguyen Tien Dat on 20/04/2023.
//

#include "Platform.hpp"
 
Platform::Platform(){
    PCollider.w = 100;
    PCollider.h = 20;
}

SDL_Rect Platform::getCollider(){
    return PCollider;
}

void Platform::render(){
    platformTexture.render(PPosX, PPosY);
}

void Platform::setterPlatform(int _x, int _y){
    PPosX = _x;
    PPosY = _y;
    
    PCollider.x = _x;
    PCollider.y = _y;
}


