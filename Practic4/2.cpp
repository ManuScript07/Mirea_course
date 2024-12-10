#include <iostream>
using namespace std;

int sign(double x){
    if (x == 0)
        return 0;
    if (x > 0)
        return 1;
    return -1;
}
int main(){
    cout<<"Введите число: ";
    double n;
    if (cin>>n)
        cout<<sign(n);
    else
        cout<<"Некорректные данные";
    return 0;
}