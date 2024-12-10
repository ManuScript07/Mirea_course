#include <iostream>
using namespace std;

int evclid(int a, int b){
    while(a != 0 && b != 0){
        if (a > b)
            a = a % b;
        else
            b = b % a;
    }
    return a+b;
}

int diff(int a, int b){
    int mx;
    while(a > 0 && b > 0){
        if (a - b == 0)
            return a;
        else{
            mx = max(a, b);
            if (mx == a)
                a = a - b;
            else
                b = b - a;
        }
    }
    return 1;
}
int main(){
    int a, b;
    cout<<"a = ";
    if (!(cin>>a)){
        cout<<"Incorrect a!!!";
        return 0;
    }
    cout<<"b = ";
    if (!(cin>>b)){
        cout<<"Incorrect b!!!";
        return 0;
    }
    cout<<"NOD(a, b) Evclid = "<<evclid(a, b)<<'\n';
    cout<<"NOD(a, b) = "<<diff(a, b);
    return 0;
}