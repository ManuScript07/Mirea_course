#include <iostream>
//#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;

int main(){
    double x, a;
    cout<<"x = ";
    cin>>x;
    cout<<"a = ";
    cin>>a;
    if (abs(x) < 1){
        if (x != 0)
            cout<<a*log(abs(x));
        else
            cout<<"Нет решений\n";
    }
    else
        cout<<"Нет решений\n";
    if (abs(x) >= 1){
        if ((a-x*x) >= 0)
            cout<<sqrt(a - x*x);
        else
            cout<<"Нет решений\n";
        }
    else
        cout<<"Нет решений\n";
    return 0;
}