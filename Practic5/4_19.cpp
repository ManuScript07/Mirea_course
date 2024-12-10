#include <iostream>
#include <vector>
#include <windows.h>
using namespace std;

void students_height(){
    cout<<"/****Анализ роста учеников ***\nВведите рост (см) и нажмите <Enter>.\nдля завершения введите 0 и нажмите <Enter>\n";
    int n, s = 0, k = 0;
    vector<int>h;
    do{
        cout<<"-> ";
        if(!(cin>>n)){
            cout<<"Incorrect digit!!!";
            return;
        }
        h.push_back(n);
        s+=n;
        k++;
    }while(n != 0);
    double sr = double(s)/(k-1);
    int c = 0;
    if (k == 1){
        cout<<"Вы никого не ввели. */";
        return;
    }
    string persone = "человек";
    if (k == 2)
        persone = "человека";
    for(int n : h)
        if (n > sr)
            c++;
    cout<<"Средний рост: "<<sr<<" см\nУ "<<(c==0?1:c)<<"-х "<<persone<<" рост превыщает средний. */";
}

int main(){
    //SetConsoleCP(1251);
    //SetConsoleOutputCP(1251);
    students_height();
    return 0;
}