#include "raylib.h"
#include <locale.h>

#define BACKGROUND RAYWHITE
#define SCREEN_WIDTH 1920
#define SCREEN_HEIGHT 1080
#define max(a, b)               \
    ({                          \
        __typeof__(a) _a = (a); \
        __typeof__(b) _b = (b); \
        _a > _b ? _a : _b;      \
    })

#define min(a, b)               \
    ({                          \
        __typeof__(a) _a = (a); \
        __typeof__(b) _b = (b); \
        _a < _b ? _a : _b;      \
    })

int main(void)
{
    setlocale(LC_NUMERIC, "");
    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "");
    SetWindowPosition(0, 0);
    SetWindowFocused();
    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        // UPDATE
        {
        }

        // DRAWING
        BeginDrawing();
        {
            ClearBackground(BACKGROUND);
        }
        EndDrawing();
    }

    CloseWindow();

    return 0;
}
