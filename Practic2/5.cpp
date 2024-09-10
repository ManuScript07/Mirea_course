#include <iostream>
using namespace std;

int main(){
    double x = -4;
    cout<<" x "<<" y \n";
    while (x <= 4){
        if (x == 1)
            cout<<x<<" Не существует\n";
        else{
            double y = (x*x - 2*x + 2)/(x - 1);
            cout<<x<<" "<<y<<"\n";
        }
        x += 0.5;
    }
}