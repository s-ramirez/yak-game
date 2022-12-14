#include <yak.hpp>
#include "components/player.hpp"

using namespace Yak;
// using namespace MM;

Game *game = nullptr;
GameObject *playerObj;
GameObject *enemy;

void init()
{
    playerObj = new GameObject();
    Player *player = new Player(*playerObj);
    playerObj->AddComponent(player);
}

void update()
{
    playerObj->Update(0.0);
    // enemy->Update(0.0);
}

void render()
{
    playerObj->Render();
    // enemy->Render();
}

int main()
{
    const int TARGET_FPS = 60;
    game = new Game();

    Config game_config;
    game_config.name = "Legend of Zelda";
    game_config.width = 800;
    game_config.height = 640;
    game_config.OnInit = init;
    game_config.OnUpdate = update;
    game_config.OnRender = render;

    game->Init(game_config);
    game->Run();
    game->Clean();
}