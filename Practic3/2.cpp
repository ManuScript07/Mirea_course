#include <iostream>
#include <math.h>

int main(){
    double s, m, n, eps=1.; 
    std::cout<<"s = ";
    std::cin>>s;
    std::cout<<"m = ";
    std::cin>>m;
    std::cout<<"n = ";
    std::cin>>n;
    if (s <= 0 or m <= 0 or n <= 0){
        std::cout<<"The values must be positive";
        return 0;
    }
    for(int p = 1; p <= 100; ++p){
        double r = double(p)/100;
        double m0 = (s*r*pow(1+r, n))/(12*(pow(1+r, n) - 1));
        if (abs(m - m0) < 0.001){
            std::cout<<"p = "<<p;
            break;
        }
    }
    return 0;


}