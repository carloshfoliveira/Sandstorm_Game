#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

#include "LoaderParams.h"
#include <SDL.h>

using std::string;

class GameObject
{
  public:

    virtual void draw(SDL_RendererFlip flag=SDL_FLIP_NONE)=0;
    virtual void update()=0;
    virtual void clean()=0;

  protected:
    GameObject(const LoaderParams* ){}
    virtual ~GameObject(){}
};

#endif
