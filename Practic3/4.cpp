#include <iostream>
#include <fstream>

using namespace std;

int main(){
    char abc[] = "JHJ767Gs23SJ2223fsdsf!03()792n2j49";
    const int size = sizeof(abc)/sizeof(char);
    ofstream fout("4.txt");
    fout<<abc<<"\n";
    fout.close();
    ifstream fin("4.txt");
    char buff[size];
    fin.getline(buff, size);
    fin.close();
    bool f = false;
    for(int i = 0; i < size; ++i){
        if (48 <= int(buff[i]) and int(buff[i]) <= 58){
            cout<<buff[i];
            f = true;
        }
        else if (f == true){
            cout<<" ";
            f = false;
        }
    }
    return 0;
}