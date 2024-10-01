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
    cin>>n;
    int s = sign(n);
    cout<<s;
    return 0;
}