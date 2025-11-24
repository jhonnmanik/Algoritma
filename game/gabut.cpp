#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;

bool gameOver;
const int width = 40;
const int height = 20;
int x, y, fruitX, fruitY, score;
int tailX[200], tailY[200];
int nTail;
enum eDirection { STOP = 0, LEFT, RIGHT, UP, DOWN };
eDirection dir;

HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(hConsole, coord);
}

void HideCursor() {
    CONSOLE_CURSOR_INFO cursorInfo;
    GetConsoleCursorInfo(hConsole, &cursorInfo);
    cursorInfo.bVisible = false; // sembunyikan kursor
    SetConsoleCursorInfo(hConsole, &cursorInfo);
}

void Setup() {
    gameOver = false;
    dir = STOP;
    x = width / 2;
    y = height / 2;
    fruitX = rand() % width;
    fruitY = rand() % height;
    score = 0;
    nTail = 0;
    system("cls"); // hanya sekali bersihkan layar
    HideCursor();
}

void DrawFrame() {
    // atas
    for (int i = 0; i < width + 2; i++) cout << "#";
    cout << endl;

    // isi
    for (int i = 0; i < height; i++) {
        cout << "#";
        for (int j = 0; j < width; j++) cout << " ";
        cout << "#" << endl;
    }

    // bawah
    for (int i = 0; i < width + 2; i++) cout << "#";
    cout << endl;

    gotoxy(0, height + 2);
    cout << "Score: 0";
}

void DrawObjects() {
    // gambar kepala
    gotoxy(x + 1, y + 1); // +1 karena ada bingkai
    cout << "O";

    // gambar buah
    gotoxy(fruitX + 1, fruitY + 1);
    cout << "*";

    // gambar ekor
    for (int i = 0; i < nTail; i++) {
        gotoxy(tailX[i] + 1, tailY[i] + 1);
        cout << "o";
    }

    // update score
    gotoxy(0, height + 2);
    cout << "Score: " << score << "   ";
}

void ClearObjects() {
    // hapus kepala
    gotoxy(x + 1, y + 1);
    cout << " ";

    // hapus ekor
    for (int i = 0; i < nTail; i++) {
        gotoxy(tailX[i] + 1, tailY[i] + 1);
        cout << " ";
    }
}

void Input() {
    if (_kbhit()) {
        switch (_getch()) {
        case 'a': dir = LEFT; break;
        case 'd': dir = RIGHT; break;
        case 'w': dir = UP; break;
        case 's': dir = DOWN; break;
        case 'x': gameOver = true; break;
        }
    }
}

void Logic() {
    int prevX = tailX[0];
    int prevY = tailY[0];
    int prev2X, prev2Y;
    tailX[0] = x;
    tailY[0] = y;
    for (int i = 1; i < nTail; i++) {
        prev2X = tailX[i];
        prev2Y = tailY[i];
        tailX[i] = prevX;
        tailY[i] = prevY;
        prevX = prev2X;
        prevY = prev2Y;
    }

    switch (dir) {
    case LEFT:  x--; break;
    case RIGHT: x++; break;
    case UP:    y--; break;
    case DOWN:  y++; break;
    default: break;
    }

    // tabrakan dinding
    if (x >= width || x < 0 || y >= height || y < 0)
        gameOver = true;

    // tabrakan ekor
    for (int i = 0; i < nTail; i++) {
        if (tailX[i] == x && tailY[i] == y)
            gameOver = true;
    }

    // makan buah
    if (x == fruitX && y == fruitY) {
        score += 10;
        fruitX = rand() % width;
        fruitY = rand() % height;
        nTail++;
    }
}

int main() {
    Setup();
    DrawFrame();

    while (!gameOver) {
        ClearObjects();
        Logic();
        DrawObjects();
        Input();
        Sleep(150); // lebih halus
    }

    gotoxy(0, height + 3);
    cout << "Game Over! Skor akhir: " << score << endl;
    return 0;
}
