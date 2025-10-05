#include <raylib.h>

class Player {
    public:
        Player(int x, int y, int width, int height, Color col);
        void DrawPlayer();
        void DetectInput();
    private:
        Rectangle Rect;
        Color Col;
};