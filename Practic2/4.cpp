#include <iostream>
using namespace std;

int main(){
    double N;
    int i;
    cout<<"N = ";
    cin>>N;
    if (N != int(N))
        N = int(N)+1;
    if (N < 1){
        i = 1;
        N = 1;
    } 
    else 
        i = N;
    for(; i < N + 10; ++i)
        cout<<i<<" ";
    return 0;
}