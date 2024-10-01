#include <iostream>

using namespace std;

void flag(){
    for(int i = 0; i < 13; ++i)
        for(int j = 0; j < 25; ++j){
            if (j < 8 && i < 6)
                cout<<"*";
            else
                cout<<"_";
            if (j == 24)
                cout<<"\n";
        }
}

int main(){
    flag();
    return 0;
}