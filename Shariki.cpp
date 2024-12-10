#include <iostream>
#include <algorithm>
using namespace std;
void generate(int* res, int n, int a[], int t = 0){
    if (t == n-1){
        for (int i=0;i<n;++i) {
            if (a[i] == i+1) {
                *res = *res + 1;
                return;
            }
        }
    }
    else{
        for(int j = t; j < n; ++j){
            swap(a[t], a[j]);
            t++;
            generate(res, n, a, t);
            t--;
            swap(a[t], a[j]);
        }
    }
}

using namespace std;
int main(){
    int n;
    cout<<"n = ";
    if (!(cin>>n)){
        cout<<"Incorrect digit";
        return 1;
    }
    int balls[n];
    for(int i = 0; i < n; ++i)
        balls[i] = i+1;
    int res = 0;
    generate(&res, n, balls);

    cout <<"res = "<<res<<endl;
    return 0;
}