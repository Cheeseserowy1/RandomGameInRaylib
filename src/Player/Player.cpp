#include "Player.hpp"

Player::Player(int x, int y, int width, int height, Color col) {
    Rect.x = x;
    Rect.y = y;
    Rect.width = width;
    Rect.height = height;

    Col = col;
}

void Player::DrawPlayer() {
    DrawRectangle(Rect.x, Rect.y, Rect.width, Rect.height, Col);
}

void Player::DetectInput() {
    if (IsKeyDown(KEY_LEFT)) Rect.x -= 2;
    if (IsKeyDown(KEY_RIGHT)) Rect.x += 2;
    if (IsKeyDown(KEY_UP)) Rect.y -= 2;
    if (IsKeyDown(KEY_DOWN)) Rect.y += 2;
}