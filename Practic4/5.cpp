#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>

using namespace std;

#define HEIGHT 20
#define WIDTH 100

int main() {
    string screen[HEIGHT];
    
    
    for (int i = 0; i < HEIGHT; ++i)
        screen[i] = string(WIDTH, ' ');
    
    
    int y;
    
    for (int x = -50; x < 50; ++x) {
        
        y = int(-10 * sin(x * M_PI / 20)); 
        
        
        if (10 + y >= 0 && 10 + y < HEIGHT && 50 + x >= 0 && 50 + x < WIDTH) {
            screen[10 + y][50 + x] = '*'; 
        }
    }
    for(int i = 0; i < 20; ++i)
        screen[i][50] = '|';
    screen[0][50] = '^';
    for(int i = 0; i < 100; ++i)
        screen[10][i] = '-';
    screen[10][99] = '>';
    for (int i = 0; i < HEIGHT; ++i)
        cout << screen[i] << endl;

    return 0;
}
