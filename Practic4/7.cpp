#include <iostream>
using namespace std;

void generation(int m, int b, int c, int n){
    int s = 0;
    for(int i = 0; i < n; ++i){
        s = (m*s + b)%c;
        cout<<s<<endl;
    }
}


int main(){
    int n, var;
    cout<<"Сколько вы хотите сгенерировать чисел: ";
    cin>>n;
    cout<<"Выберите вариант генерации 1 или 2: ";
    cin>>var;
    if (var == 1)
        generation(37, 3, 64, n);
    else if (var == 2)
        generation(25173, 13849, 65537, n);
    else
        cout<<"Некорректные данные";
    return 0;
}