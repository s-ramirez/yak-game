#include <yak.h>

using namespace Yak;
// using namespace MM;

Game *game = nullptr;
Entity *player;
Entity *enemy;

void init()
{
    player = new Entity("/content/sprites/player.png", 0, 0);
    enemy = new Entity("/content/sprites/player.png", 50, 50);
}

void update()
{
    player->Update();
}

void render()
{
    player->Render();
    enemy->Render();
}

int main()
{
    const int TARGET_FPS = 60;
    game = new Game();

    Config game_config;
    game_config.name = "Legend of Zelda";
    game_config.width = 1280;
    game_config.height = 720;
    game_config.OnInit = init;
    game_config.OnUpdate = update;
    game_config.OnRender = render;

    game->Init(game_config);
    game->Run();
    game->Clean();
}