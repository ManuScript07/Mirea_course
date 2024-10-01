#include <iostream>
#include <stdlib.h>
#include <cmath>
using namespace std;

string abc = "0123456789ABCDEF";
string from_ss(int n, int osn){
    string s = "";
    while (n > 0){
        s = abc[n % osn] + s; 
        cout<<s<<endl;
        n /= osn;
    }
    return s;
}

int to_dec(string& n, int osn){
    int s = 0;
    int len = n.length();
    for(int i = 0; i < len; ++i)
        s +=abc.find(n[i])*pow(osn, len-i-1);

    return s;
}
int defss(string& n){
    int max = -1, ind;
    for(int i = 0; i < n.length(); ++i){
        ind = abc.find(n[i]);
        if (ind == string::npos)
            return -1;
        max = (ind > max)?ind:max;
    }
    return max+1;
}

int main(){
    string num;
    int start, finish;
    cout<<"Введите чиcло: ";
    cin>>num;
    cout<<"Введите его систему счисления: ";
    cin>>start;
    cout<<"Введите сс в которую нужно перевести число: ";
    cin>>finish;
    if (!(2 <= start and start <=  16 and 2 <= finish and finish <= 16)){
        cout<<"Некорректная система счисления";
        return 0;
    }
    int ss = defss(num);
    if (ss > start){
        cout<<"Введена слишком маленькая система счисления";
        return 0;
    }
    if (start == finish){
        cout<<"Результат"<<num;
        return 0;
    }
    
    if (ss == -1){
        cout<<"Некорректное число";
        return 0;
    }
    
    string res = from_ss(to_dec(num, start), finish);
    cout<<"Результат: "<<res;
    return 0;
}