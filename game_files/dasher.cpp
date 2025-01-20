#include "raylib.h"

int main()
{    
    // Window Dimensions
    // const - Value can't be changed!
    const int windowWith   {512};
    const int windowHeight {380};
    
    // Widnow Initialisation and FPS
    InitWindow(windowWidth, windowHeight, "Skiper Dasher!");
    SetTargetFPS(60);

    while (!WindowShouldClose())
    { 
        // Start drawing
        BeginDrawing();
        ClearBackground(WHITE);

        // Stop Drawing
        EndDrawing();
    }

}
