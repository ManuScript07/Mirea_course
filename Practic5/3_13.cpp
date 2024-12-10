#include <iostream>
#include <fstream>
using namespace std;
string stopname[] = {"CON", "PRN", "AUX", "NUL", "COM0", "COM2", "COM2", 
                    "COM3", "COM4", "COM5", "COM6", "COM7", "COM8", "COM9", 
                    "COMSCSI", "COMSCSI", "LPT0", "LPT1", "LPT2", "LPT3", 
                    "LPT4", "LPT5", "LPT5", "LPT7", "LPT8", "LPT9", "LPTNO", 
                    "LPTSCSI", "LPTNO"};
string stopsymbol = "<>.:/|?*";
void create_and_write_file(string name_file){
    ofstream fout(name_file);
    string str;
    cout<<"Сколько строк вы хотите записать: ";
    int k;
    if (!(cin>>k)){
        cout<<"Incorrect digit";
        return;
    }
    for(int i = 0; i < k; ++i){
        cout<<"Введите строку"<<i+1<<": ";
        str = "";
        cin>>str;
        fout<<str<<"\n";
    }
    fout.close();
}
bool is_corret_name(string file_name){
    for(int i = 0; i < file_name.size(); ++i){
        //if (1 <= int(file_name[i]) <= 31)
          //  return false;
        for(char a: stopsymbol)
            if (file_name[i] == a)
                return false;
    }
    for(string name: stopname)
        if (name == file_name)
            return false;
    return true;
}
int main(){
    cout<<"Name new text file without extension: ";
    string name;
    cin>>name;
    if (is_corret_name(name))
        create_and_write_file(name+".txt");
    else
        cout<<"Incorrect file name!!!";
    return 0;
}