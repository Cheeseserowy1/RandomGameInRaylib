#include <iostream>
#include <raylib.h>
#include "./Player/Player.hpp"

int main() {
    const int width = 800;
    const int height = 600;
    const char* title = "Incremental";

    InitWindow(width, height, title);

    SetTargetFPS(60);

    // Player
    Player player = Player(100, 100, 50, 50, RED);

    while (!WindowShouldClose())
    {
        BeginDrawing();
            ClearBackground(RAYWHITE);
            DrawText(TextFormat("%d", GetFPS()), 20, 20, 35, GREEN);

            //Player
            player.DetectInput();
            player.DrawPlayer();
        EndDrawing();
    }

    CloseWindow();
    return 0;
}