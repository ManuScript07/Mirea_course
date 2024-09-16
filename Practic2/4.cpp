#include <iostream>
using namespace std;

int main(){
    int N, i;
    cout<<"N = ";
    cin>>N;
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