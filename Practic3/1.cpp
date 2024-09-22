#include <iostream>
#include <math.h>
using namespace std;

int main(){
    double s, p, n, m;
    cout<<"s = ";
    cin>>s;
    cout<<"p = ";
    cin>>p;
    cout<<"n = ";
    cin>>n;
    if (s <= 0 or n <= 0 or p < 0){
        cout<<"The values must be positive";
        return 0;
    }
    if (p == 0)
        m = s/(12*n);
    else{
        double r = p/100;
        m = (s*r*pow((1+r), n))/(12*(pow(1+r, n)-1));
    }
    cout<<"m = "<<m;
    return 0;

}