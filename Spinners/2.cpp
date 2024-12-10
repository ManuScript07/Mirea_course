#include <iostream>
using namespace std;


int main(){
    int m;
    cout<<"m = ";
    if (!(cin>>m)){
        cout<<"Incorrect digit";
        return 0;
    }
    int l4 = m % 3;
	int l3 = (m - 4 * l4) / 3;
	if (l3 >= 0) {
		cout<<l3<<endl<<l4;
	}
    else
        cout<<"0\n0";
    return 0;
}