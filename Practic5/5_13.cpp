#include <iostream>
#include <map>
#include <fstream>
#include <vector>
using namespace std;

#define NAME_FILE "5_13.txt"
#define NEW_NAME_FILE "5_13_new.txt"


void read_file(string name_file){
    ifstream fin(name_file);
    string temp;
    while(getline(fin, temp))
        cout<<temp<<endl;
    fin.close();
}

void create_new_file(string name_file, vector<int>& nums){
    ofstream fout(name_file);
    for(int n: nums)
        fout<<to_string(n)<<endl;
    fout.close();
    cout<<"After:"<<endl;
    read_file(NEW_NAME_FILE);
}


void sorted_nums(vector<int>& nums){
    int pos;
    int len = nums.size();
    for(int i = 0; i < len; ++i){
        pos = i;
        for(int j = i + 1; j < len; ++j)
            if (nums[pos] > nums[j])
                pos = j;
        if (pos != i){
            int temp = nums[i];
            nums[i] = nums[pos];
            nums[pos] = temp;
        }
    }

    create_new_file(NEW_NAME_FILE, nums);
}


void max_finds(map<int, int>& digits){
    int mx = -1;
    for(auto& item : digits){
        if (mx < item.second)
            mx = item.second;
    }
    vector<int>mxd;
    for(auto& item: digits)
        if (mx == int(item.second))
            mxd.push_back(int(item.first));
    sorted_nums(mxd);
}


void create_and_write_file(string name_file, int n){
    ofstream fout(name_file);
    int num;
    map<int, int> digits;
    for(int i = 0; i < n; ++i){
        cout<<"Input digit "<<i+1<<": ";
        if (!(cin>>num)){
            cout<<"incorrect value";
            return;
        }
        if (digits.count(num) == 0)
            digits[num] = 1;
        else
            digits[num]++;
        fout<<to_string(num)<<endl;

    }
    fout.close();
    cout<<"Before"<<endl;
    read_file(NAME_FILE);
    max_finds(digits);
}


int main(){
    int n;
    cout<<"n = ";
    if (!(cin>>n) || n < 1){
        cout<<"incorrect value";
        return 0;
    }
    create_and_write_file(NAME_FILE, n);
    return 0;
}