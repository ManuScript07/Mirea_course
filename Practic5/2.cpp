#include <iostream>
using namespace std;

void Erastophene(int a[], int n){
    int m = 2, j;
    while(m < n){
        if (a[m] != 0){
            j = m * 2;
            while (j < n){
                a[j] = 0;
                j += m;
            }
            m += 1;

        }
        else
            m += 1;
    }
}
void Output(int a[], int n){
    for(int i = 0; i < n+1; ++i)
        if(a[i] != 0 && a[i] != 1)
            cout<<a[i]<<" ";
}
int main(){
    int n;
    cout<<"n = ";
    if (!(cin>>n) || n <= 1){
        cout<<"Incorrect n!!!";
        return 0;
    }
    int a[n+1] = {};
    for(int i = 0; i < n+1; ++i)
        a[i] = i;
    Erastophene(a, n);
    Output(a, n);
    return 0;
}