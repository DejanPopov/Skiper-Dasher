#include "raylib.h"

int main()
{    
    // Window Dimensions
    // const - Value can't be changed!
    const int windowWidth   {512};
    const int windowHeight {380};
    
    // Widnow Initialisation and FPS
    InitWindow(windowWidth, windowHeight, "Skiper Dasher!");
    SetTargetFPS(60);

    // Rectangle diimesions
    const int  rectangleWidth  {50};
    const int  rectangleHeight {80};

    if(isKeyPressed(KEY_SPACE))
    {
        velocity -= 10;
    }

    int posY     {windowHeight - rectangleHeight};
    int velocity {-10};

    
    while (!WindowShouldClose())
    { 
        // Start drawing
        BeginDrawing();
        ClearBackground(WHITE);

        posY += velocity;
        DrawRectangle(windowWidth/2, posY, ,rectangleWidth rectangleHeight, BLUE);

        // Stop Drawing
        EndDrawing();
    }
    CloseWindow();

}
