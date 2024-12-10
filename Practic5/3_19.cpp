#include <iostream>
#include <fstream>
#include <map>
using namespace std;

void max_find(map<char, unsigned> &symbols){
    int mx = -1;
    char sym;
    for (const auto& [a, b] : symbols)
        if(int(b) > mx){
            mx = int(b);
            sym = char(a);
        }
    cout<<sym<<" : "<<mx;
}

void counter_sym(string line){
    map<char, unsigned> symbols;
    char sym;
    for(int i = 0; i < line.size(); ++i){
        sym = line[i];
        if (symbols.count(sym)==0)
            symbols[sym] = 1;
        else
            symbols[sym]++; 
    }
    max_find(symbols);
}

void create_and_write_file(string name_file){
    ofstream fout(name_file);
    string str;
    cout<<"Введите содержимое файла";
    cin>>str;
    fout<<str<<"\n";
    fout.close();
}

string read_file(string name_file){
    ifstream fin(name_file);
    string temp;
    string lines;
    while(getline(fin, temp))
        lines += temp;
    fin.close();
    return lines;
}


int main(){
    create_and_write_file("1_19.txt");
    string str = read_file("1_19.txt");
    counter_sym(str);
    return 0;
}