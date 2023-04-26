//
//  player.hpp
//  FirstProject
//
//  Created by Nguyen Tien Dat on 18/04/2023.
//

#ifndef player_hpp
#define player_hpp

#include <iostream>
#include <SDL2/SDL.h>
#include <SDL2_image/SDL_image.h>
#include <vector>
#include "Core.hpp"
#include "initSDL.hpp"

class Player{
    int VelX,VelY;
    
    int PosX,PosY;
    
    bool facingRight;
    
    SDL_Rect mCollider;
    
    void shiftCollider();
public:
    static const int Vel = 10;
    
    static const int SizeX = 96;
    static const int SizeY = 44;
    
    Player();
    
    void handleEvent(SDL_Event &e);
    
    void move(int SCREEN_WIDTH);
    
    void render();
    
    SDL_Rect getCollider();
    
    void jump(){
        PosY += VelY;
    }
    
    int getX();
    int getY();
    
    void updatePositionY(int needToUpdate);
};



#endif /* player_hpp */
