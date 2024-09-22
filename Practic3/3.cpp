#include <iostream>
#include <fstream>
int main(){
    char abc[] = "Hello, world!";
    std::ofstream fout("3.txt");
    fout<<abc<<std::endl;
    fout.close();
    std::ifstream fin("3.txt");
    char buff[100];
    fin.getline(buff, 100);
    fin.close();
    std::cout<<buff;
    return 0;
}