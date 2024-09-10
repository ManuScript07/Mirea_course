#include <iostream>
//#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;

int main(){
    double b, y, x;
    cin>>b>>x>>y;
    if (b - y > 0 and b - x >= 0){
        cout<<"z = "<<log(b-y)*sqrt(b - x);
    }
    else{
        cout<<"Нет решений";
    }
    return 0;
}