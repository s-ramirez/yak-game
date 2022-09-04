#include <yak.h>

using namespace Yak;
// using namespace MM;

Game *game = nullptr;
Entity *player;

void init()
{
    player = new Entity("/Users/sramirez/Documents/Development/SDL/SDL2Test/content/sprites");
}

void update()
{
    std::cout << "Totally working" << std::endl;
}

void render()
{
    // Renderer::DrawImage(player)
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

    game->init(game_config);
    game->run();
    game->clean();
}