#include "GameObject.hpp"
#include "TextureManager.hpp"

GameObject::GameObject(const char* texturePath,SDL_Renderer* ren){
    renderer = ren;
    objTexture = TextureManager::LoadTexture(texturePath,ren);
}

void GameObject::update(){
    


}


void GameObject::render(){

    SDL_RenderCopy(renderer,objTexture,&srcRect,&desRect);
}