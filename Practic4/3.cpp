#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

#define SQUARE 1
#define POLYGON 2
#define CIRCLE 3

double polygon(){
    double a, h, s;
    cout<<"a = ";
    cin>>a;
    cout<<"h = ";
    cin>>h;
    if (a > 0 && h > 0)
        s = (a*h)/2;
    else
        return -1;
    return s;
}
double square(){
    double a, b, s;
    cout<<"a = ";
    cin>>a;
    cout<<"b = ";
    cin>>b;
    if (a > 0 && b > 0)
        s = a*b;
    else
        return -1; 
    return s;
}
double circle(){
    double R, s;
    cout<<"R = ";
    cin>>R;
    if (R > 0)
        s = M_PI*R*R;
    else
        return -1;
    return s;
}
int main(){
    int n;
    cout<<"1 - square\n2 - polygon\n3 - circle"<<endl;
    cout<<"Yoir choice: ";
    cin>>n;
    double res;
    switch (n)
    {
    case SQUARE:
        res = square();
        break;
    case POLYGON:
        res = polygon();
        break;
    case CIRCLE:
        res = circle();
        break;
    default:
        cout<<"You entered an incorrect value";
        break;
    }
    if (res != -1)
        cout<<"res = "<<res;
    else
        cout<<"You entered an incorrect value";
    return 0;
}