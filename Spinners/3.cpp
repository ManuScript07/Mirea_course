#include <iostream>

using namespace std;

int main(){
    unsigned int n, m;
    if (!(cin>>n)){
        cout<<"Incorrect digit";
        return 0;
    }
    if (!(cin>>m)){
        cout<<"Incorrect digit";
        return 0;
    }
    long long res = (n*(n+1)/2)*(m*(m+1)/2);		
	cout<<res;
    return 0;
}