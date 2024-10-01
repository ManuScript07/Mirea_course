#include <iostream>
#include <fstream>
using namespace std;


bool symbol_in_num(string str, int len){
    int cm = 0, cd = 0, cp = 0;
    for(int i = 0; i < len; ++i){
        if (str[i] == '-')
            cm++;
        if (str[i] == '+')
            cp++;
        if (str[i] == '.')
            cd++;
        if (cm > 1 or cd > 1 or cp > 1)
            return false;
    }
    return true;
}


bool is_num(string str){
    size_t len = str.size();
    int i = 0;
    if ((str[0] == '-' or str[0] == '+') and len > 1)
        i = 1;
    if (!symbol_in_num(str, len))
        return false;
    for(; i < len;  ++i)
        if(!isdigit(str[i]) and str[i] != '.')
            return false;
    return true;
}


void create_and_write_file(string name_file){
    ofstream fout(name_file);
    string num;
    for(int i = 0; i < 10; ++i){
        cout<<"Input num "<<i+1<<": ";
        do{
        cin>>num;
        }while(!is_num(num));
        fout<<num<<"\n";
    }
    fout.close();
}


double read_and_summ_file(string name_file){
    ifstream fin(name_file);
    double s = 0.;
    string temp;
    while(getline(fin, temp))
        s += stod(temp);
    fin.close();
    return s;
}


int main(){
    create_and_write_file("1.txt");
    double s = read_and_summ_file("1.txt");
    cout<<"s = "<<s;
    return 0;
}