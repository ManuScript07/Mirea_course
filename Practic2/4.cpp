#include <iostream>
using namespace std;

int main(){
    int N;
    cout<<"N = ";
    cin>>N;
    if (N < 1){
        cout<<"N не натуральное число";
        return 0;
    }
    for(int i = N; i < N + 10; ++i){
        cout<<i<<" ";
    }
    return 0;
}