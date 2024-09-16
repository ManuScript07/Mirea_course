#include <iostream>
#include <math.h>
using namespace std;

int main(){
    double x, a;
    cout<<"x = ";
    cin>>x;
    cout<<"a = ";
    cin>>a;
    if (x == 0 or a-x*x<0){
        cout<<"Нет решений";
        return 0;
    }
    if (abs(x) < 1)
        cout<<a*log(abs(x));
    else if (abs(x) >= 1)
        cout<<sqrt(a - x*x);
    return 0;
}