//
//  Core.cpp
//  FirstProject
//
//  Created by Nguyen Tien Dat on 20/04/2023.
//

#include "Core.hpp"

bool checkCollisionPlayerPlat(SDL_Rect a, SDL_Rect b){
    //The top of platform and bottom of player
    int topB;
    int bottomA;

    //Calculate the bottom of rect player
    bottomA = a.y + a.h;

    //Calculate the top of rect platform
    topB = b.y;
    
    //If player collide with top of platform
    if( bottomA == topB ){
        return true;
    }
    //Else
    return false;
}

bool isRunning(SDL_Event& e){
    if(e.type == SDL_QUIT){
        return false;
    }
    return true;
}

void displayMessage(){
    
}

