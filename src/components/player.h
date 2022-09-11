#pragma once
#include <yak.hpp>

using namespace Yak;

class Player : public GameObject
{
public:
    Player();

private:
    Animation *animation;
}