//
//  main.cpp
//  FirstProject
//
//  Created by Nguyen Tien Dat on 17/04/2023.
//

#include <iostream>
#include <SDL2/SDL.h>
#include <SDL2_image/SDL_image.h>
#include "Core.hpp"
#include "initSDL.hpp"
#include "player.hpp"
#include "Platform.hpp"

using namespace std;

int gravity = 10;

int main(int argc, char * argv[]) {
    srand(time(0));
    
    if(!initSDL("My SDL", WINDOW_WIDTH, WINDOW_HEIGHT)){
        cout << "Cannot init window" << endl;
    }

    if(!loadMedia()){
        cout << "Cannot load file" << endl;
    }
    
    SDL_Event e;
    

    bool quit = false;
    
    while(quit == false){
        while(SDL_PollEvent(&e) != 0){
            if(e.type == SDL_QUIT){
                quit = true;
            }
        }
        
    }
    
    return 0;
}
