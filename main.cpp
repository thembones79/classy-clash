#include "raylib.h"

int main() {
  int windowDimensions[2];
  windowDimensions[0] = 384;
  windowDimensions[1] = 384;

  InitWindow(windowDimensions[0], windowDimensions[1], "Classy Clash");
  Texture2D background = LoadTexture("nature_tileset/OpenWorldMap24x24.png");

  SetTargetFPS(60);
  while (!WindowShouldClose()) {
    BeginDrawing();

    ClearBackground(WHITE);
    Vector2 bg1Pos{0.0, 0.0};
    DrawTextureEx(background, bg1Pos, 0.0, 4.0, WHITE);

    EndDrawing();
  }
  UnloadTexture(background);
  CloseWindow();
}
