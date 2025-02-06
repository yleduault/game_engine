#pragma once
#include "Game.hpp"

class GameObject {

    public:
        GameObject(const char* texturePath,SDL_Renderer* ren);
        ~GameObject();

        void update();
        void render();

    private:
        int xpos;
        int ypos;

        SDL_Texture* objTexture;
        SDL_Rect srcRect,desRect;
        SDL_Renderer* renderer;

}