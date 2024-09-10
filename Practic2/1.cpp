#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
using std::cin; 
using std::cout;
using std::endl;

int main(){
    double R, r, h, V, S;
    cout<<"R = ";
    cin>>R;
    cout<<"r = ";
    cin>>r;
    cout<<"h = ";
    cin>>h;
    if (R <= 0 and r <= 0 and h <= 0)
    {
        cout<<"Некорректные значения";
        return 0;
    }
    double l = sqrt(pow(abs(R - r), 2) + h*h);
    if (R == r or h == l){
        cout<<"Это не усечённый конус";
        return 0;
    }
    V = (M_PI*h*(2*R + R * r + 2*r))/3;
    S = M_PI*(2*R + l*(R + r) + 2*r);
    cout<<"V = "<<V<<" "<<"S = "<<S<<endl;
    return 0;
}