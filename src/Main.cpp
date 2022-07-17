#include <iostream>
#include "Constants.h"
#include "Game.h"

using namespace std;

int WinMain(int argc, char *args[]) {  //Why WinMain?!?

    Game game;

    game.Initialize(WINDOW_WIDTH, WINDOW_HEIGHT);

    while (game.IsRunning()) {
        game.ProcessInput();
        game.Update();
        game.Render();
    }

    game.Destroy();

    return 0;
}