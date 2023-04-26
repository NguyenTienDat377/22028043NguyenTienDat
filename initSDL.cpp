//
//  initSDL.cpp
//  FirstProject
//
//  Created by Nguyen Tien Dat on 17/04/2023.
//

#include "initSDL.hpp"

bool initSDL(const char* windowName,int WIDTH,int HEIGHT){
    //initiate SDL
    if(SDL_Init(SDL_INIT_EVERYTHING) < 0){
        std::cerr << "Cannot init SDL. Error: " << SDL_GetError() << std::endl;
        return false;
    }
    
    //Create window
    window = SDL_CreateWindow(windowName, SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, WIDTH, HEIGHT, SDL_WINDOW_SHOWN);
    
    //Check whether window is successfully created
    if(window == NULL){
    std::cerr << "Cannot create window. Error: " << SDL_GetError() << std::endl;
        return false;
    }
    
    //Check Linear texture filtering
    if(!SDL_SetHint( SDL_HINT_RENDER_SCALE_QUALITY, "1" ) )
    {
        std::cerr << "Warning: Linear texture filtering not enabled!";
    }
    
    //Create renderer?
    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    
    //Check renderer
    if(renderer == NULL){
        std::cerr << "Unable to create Renderer. Error: " << SDL_GetError() << std::endl;
        return false;
    }
    
    SDL_SetRenderDrawColor(renderer, 0xFF, 0xFF, 0xFF, 0xFF);
    
    //Initiate SDL_IMG
    int imgFlags = IMG_INIT_PNG;
    
    if(!(IMG_Init(imgFlags) & imgFlags)){
        std::cerr << "Cannot init IMG library. Error: " << IMG_GetError() << std::endl;
        return false;
    }
    
    return true;
}

bool loadMedia(){
    bool success = true;
    
    if(!backgroundTexture.loadFromFile("background.png")){
        std::cerr << "Unable to load background sprite" << std::endl;
        success = false;
    }
    
    /*if(!playerLeftTexture.loadFromFile("playerLeft.png")){
        std::cerr << "Unable to load player's left side sprite" << std::endl;
        success = false;
    }
    
    if(!playerRightTexture.loadFromFile("playerRight.png")){
        std::cerr << "Unable to load player's right side sprite" << std::endl;
        success = false;
    }
    
    if(!platformTexture.loadFromFile("platform.png")){
        std::cerr << "Unable to load background sprite" << std::endl;
        success = false;
    }*/
    
    SDL_RenderClear(renderer);
    
    backgroundTexture.render(SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED);
    
    SDL_RenderPresent(renderer);
    
    return success;
}
