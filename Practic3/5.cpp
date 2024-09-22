#include <iostream>

using namespace std;

int main(){
    string abc;
    cout<<"abc = ";
    cin>>abc;
    int sz = abc.length();
    for(int i = 0; i < sz; ++i){
        int pos = i;
        for(int j = i+i; j < sz; ++j){
            if (int(abc[i]) >= int(abc[j]))
                pos = j;
        }
        if (pos != i){
            char temp = abc[i];
            abc[i] = abc[pos];
            abc[pos] = temp;
        }
    }
    cout<<"Sorted string: "<<abc;
    return 0;
}