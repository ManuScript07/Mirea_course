#include <iostream>
#include <string>
using namespace std;

#define LENTH 43

bool check_three(const string& str, int len){
    for(int i = 0; i < len-3; ++i)
        if (str[i] == str[i+1] and str[i+1] == str[i+2] and str[i+2] == str[i+3])
            return true;
    return false;
}

bool check(const string arr[], const string& str) {
    for (int i = 0; i < LENTH; ++i)
        if (str.find(arr[i]) != string::npos)
            return false;
    return true;
}

string to_upper(string& str, int len){
    for(int i = 0; i < len; ++i)
        str[i] = toupper(str[i]);
    return str;
}

int romanums(char num){
    switch(num){
        case 'I':
            return 1;
        case 'V':
            return 5;
        case 'X':
            return 10;
        case 'L':
            return 50;
        case 'C':
            return 100;
        case 'D':
            return 500;
        case 'M':
            return 1000;
        default:
            cout<<"Input incorrect symbol";
            return 0;
    }
}


int to_roma(string str, int len){
    int x1, x2, s = 0;
    for(int i = 0; i < len-1; ++i){
        x1 = romanums(str[i]);
        x2 = romanums(str[i+1]);
        if (x1 == 0 or x2 == 0)
            return 0;
        if (x1 < x2)
            s -= x1;
        else
            s += x1;
    }
    s += romanums(str[len-1]);
    return s;


}
int main(){
    const string blocked_combinations[LENTH] = {"IXC","VX","VIV","VIIX","VIIV","VIIXL","IIIV","IIV","IIII","IIX","XIIII","XIIIIX",
		                                "XIIIIX","XXXX","LL","CLC","CLL","DLD","LDD","LLI", "VV", "LL", "DD", "MMMCMXCX","AXX","LXA","XXIXX",
		                                "VVX","VXV","IVI","XLX","LCL","IVV","IXX","XLL","XCC","CDD","CMM","LXL","DCD",
		                                "MDXCLXIVIL","MDCILXIVIIX","MDMMCLXIVICI"};
    
    string romanum;
    cout<<"Input digit: ";
    cin>>romanum;
    int len = romanum.length();
    romanum = to_upper(romanum, len);
    if (!check(blocked_combinations, romanum) or len == 0 or check_three(romanum, len)){
        cout<<"Incorrect digit";
        return 0;
    }
    cout<<"Arabic form: "<<to_roma(romanum, len);
    return 0;
}