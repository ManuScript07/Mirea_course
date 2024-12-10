#include <iostream>
#include <vector>
using namespace std;


int m;
void print_nums(const vector<int>& nums){
    for(int i = 0; i < nums.size(); ++i)
        cout<<nums[i]<<" ";
}
bool sumdigit(int n){
    int s = 0;
    while(n > 0){
        s += n % 10;
        n /= 10;
    }
    return s == m;
}

vector<int> enumeration(){
    vector<int>nums;
    int m;
    cout<<"m = ";
    for(int i = 100; i < 1000; ++i)
        if (sumdigit(i)){
            nums.push_back(i);
            nums.push_back(-i);
        }
    return nums;
}


int main(){
    cout<<"m = ";
    if (!(cin>>m)){
        cout<<"Incorrect digit";
        return 1;
    }
    vector<int>nums = enumeration();
    print_nums(nums);
    return 0;
}