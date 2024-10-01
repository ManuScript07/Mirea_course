#include <iostream>
#include <fstream>
int main(){
    char abc[] = "Hello, world!";
    std::ofstream fout("3.txt");
    fout<<abc<<std::endl;
    fout.close();
    std::ifstream fin("3.txt");
    std::string buff;
    while(std::getline(fin, buff))
        std::cout<<buff<<std::endl;
    fin.close();
    std::cout<<buff;
    return 0;
}