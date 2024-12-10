#include <iostream>

using namespace std;

int main(){
    int a, b, c;
    cout<<"a = ";
    if (!(cin>>a) || a < 0){
        cout<<"Incorrect digit";
        return 1;
    }
    cout<<"b = ";
    if (!(cin>>b) || b < 0){
        cout<<"Incorrect digit";
        return 1;
    }
    cout<<"c = ";
    if (!(cin>>c) || c < 0){
        cout<<"Incorrect digit";
        return 1;
    }
    if (a > c){
        cout<<"a <= c !!!";
        return 1;
    }
    int n = double(c-a)/b;
    if (n == 0){
        cout<<"Спинера не существует";
        return 1;
    }
    cout<<"n = "<<n;
    return 0;
}
