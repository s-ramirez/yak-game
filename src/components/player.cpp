#include "player.hpp"

Player::Player(GameObject &parent) : Component(parent)
{
    Animation *animation = new Animation(parent, "/content/sprites/player.png", 0, 0, 0);
    parent.AddComponent(animation);
}

Player::~Player() {}

void Player::Init()
{
}

void Player::Update(float dt)
{
}

void Player::Render()
{
}

bool Player::Is(const std::string &type) const
{
    return type == std::string("Player");
}