#include <iostream>
#include <fstream>

using namespace std;

int main(){
    char abc[] = "JHJ767Gs23SJ2223fsdsf!03()792n2j49\nffsdeEEGR543345353\nnDGSDG232";
    const int size = sizeof(abc)/sizeof(char);
    ofstream fout("4.txt");
    fout<<abc<<"\n";
    fout.close();
    ifstream fin("4.txt");
    
    string line;
    bool f = false;
    while (getline(fin, line)){
        int len = line.length();
        for(int i = 0; i < len; ++i){
            if (48 <= int(line[i]) and int(line[i]) <= 58){
                cout<<line[i];
                f = true;
            }
            else if (f == true){
                cout<<" ";
                f = false;
            }
        }
        cout<<'\n';
        f = false;
    }
    return 0;
}