#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
using std::cin; 
using std::cout;
using std::endl;

int main(){
    double R, r, h;
    cout<<"R = ";
    cin>>R;
    cout<<"r = ";
    cin>>r;
    cout<<"h = ";
    cin>>h;
    if (R <= 0 or r <= 0 or h <= 0 or R == r)
    {
        cout<<"Некорректные значения";
        return 0;
    }
    double l = sqrt(pow(abs(R - r), 2) + h*h);
    double V = (M_PI*h*(R*R + R * r + r*r))/3;
    double S = M_PI*(R*R + l*(R + r) + r*r);
    cout<<"V = "<<V<<" "<<"S = "<<S<<endl;
    return 0;
}