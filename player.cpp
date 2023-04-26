//
//  player.cpp
//  FirstProject
//
//  Created by Nguyen Tien Dat on 18/04/2023.
//

#include "player.hpp"

Player::Player(){
    VelX = 0;
    VelY = 0;
    
    PosX = 0;
    PosY = 0;
    
    facingRight = true;
    
    mCollider.w = SizeX;
    mCollider.h = SizeY;
}

void Player::handleEvent(SDL_Event &e){
    if(e.type == SDL_KEYDOWN && e.key.repeat == 0){
        switch(e.key.keysym.sym){
            case SDLK_RIGHT: VelX += Vel; facingRight = true; break;
            case SDLK_LEFT: VelX -= Vel; facingRight = false; break;
        }
    }
    else if(e.type == SDL_KEYUP && e.key.repeat == 0){
        switch (e.key.keysym.sym) {
            case SDLK_RIGHT: VelX -= Vel; break;
            case SDLK_LEFT: VelX += Vel; break;
        }
    }
}

void Player::move(int SCREEN_WIDTH){
    PosX += VelX;
    
    if(PosX < 0 || PosX + SizeX > SCREEN_WIDTH){
        PosX -= VelX;
    }
    
}

void Player::render(){
    if(facingRight){
        playerRightTexture.render(PosX, PosY);
    }
    else{
        playerLeftTexture.render(PosX, PosY);
    }
}

SDL_Rect Player::getCollider(){
    return mCollider;
}

int Player::getX(){
    return PosX;
}

int Player::getY(){
    return PosY;
}

void Player::updatePositionY(int needToUpdate){
    PosY += needToUpdate;
}

