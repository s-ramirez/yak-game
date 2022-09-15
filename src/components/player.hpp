#pragma once
#include <yak.hpp>

using namespace Yak;

class Player : public Component
{
public:
    Player(GameObject &parent);
    ~Player();

    void Init() override;
    void Update(float dt) override;
    void Render() override;
    bool Is(const std::string &type) const override;
};