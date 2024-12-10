#include <iostream>

using namespace std;

int cupenumber(int place){
    if (place < 37)
        return (place-1) / 4;
    else
        return 8 - (place - 36 - 1)/2;
}

bool find(int arr[], int n){
    for(int i = 0; i < 54; ++i)
        if (arr[i] == n)
            return false;
    return true;
}

int main(){
    int c[9] = {0};
    int n;
    int dubles[n] = {0};
    if (!(cin>>n) || n < 0 || n > 54){
        cout<<"Incorrect digit";
        return 1;
    }
    int temp;
    int j = 0;
    for(int i = 0; i < n; ++i){
        if (!(cin>>temp) || temp < 1 || temp > 54){
            cout<<"Incorrect digit";
            return 1;
        }
        if (find(dubles, temp)== true){
            c[cupenumber(temp)] += 1;
            dubles[j] = temp;
            j++;
        }
        else{
            cout<<"you entered two identical numbers!!!";
            return 1;
        }
    
    }
    int k = 0, mx = 0;
    for(int i = 0; i < 9; ++i){
        if (c[i] == 6){
            k++;
            mx = (k > mx)?k:mx;
        }
        else
            k = 0;

    }
    cout<<mx;
    return 0;
}