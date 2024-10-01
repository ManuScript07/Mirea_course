#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

#define SQUARE 1
#define POLYGON 2
#define CIRCLE 3
bool check(int n){
    if (n > 0)
        return true;
    return false; 
}
double polygon(){
    double a, h;
    cout<<"a = ";
    cin>>a;
    cout<<"h = ";
    cin>>h;
    double s = (a*h)/2;
    return s;
}
double square(){
    double a, b;
    cout<<"a = ";
    cin>>a;
    cout<<"b = ";
    cin>>b;
    double s = a*b;
    return s;
}
double circle(){
    double R, s;
    cout<<"R = ";
    cin>>R;
    if (check(R))
        s = M_PI*R*R;
    else
        s = -1;
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
        if (res != -1)
            cout<<"res = "<<res;
        else
            cout<<"Ошибка";
        break;
    case POLYGON:
        res = polygon();
        cout<<"res = "<<res;
        break;
    case CIRCLE:
        res = circle();
        cout<<"res = "<<res;
        break;
    default:
        cout<<"You entered an incorrect value";
        break;
    }
    return 0;
}