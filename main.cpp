#include <iostream>
#include <Windows.h>
using namespace std;

struct Mystruct
{
    int x;
    int y;
    int width;
    int height;
};
void ChangeSize(Mystruct& rectangle, int width, int height)
{
    rectangle.width = width;
    rectangle.height = height;
}
void gotoxy(int x, int y) {
    COORD pos = { x, y };
    HANDLE output = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(output, pos);
}
void MoveRectangle(Mystruct& rectangle, int x, int y)
{
    rectangle.x = x;
    rectangle.y = y;
}
void PrintRectangle(Mystruct& rectangle)
{
    int x = rectangle.x;
    int y = rectangle.y;
    for (int i = 0; i < rectangle.height; ++i) {
        gotoxy(x, y);
        for (int j = 0; j < rectangle.width; ++j) {
            if (i == 0 || i == rectangle.height - 1 || j == 0 || j == rectangle.width - 1) {
                cout << '*';
            }
            else {
                cout << ' ';
            }
        }
        y++;
    }
}




int main() {

    Mystruct rectangle = { 2, 3, 5, 5 };
    ChangeSize(rectangle, 15, 10);
    MoveRectangle(rectangle, 10, 10);
    PrintRectangle(rectangle);
    return 0;
}