#include <iostream>
#include <math.h>

int main(){
    double s, m, n;
    long double eps = 0.0001; 
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
    double max_p = 0;
    for(double p = 1.; p <= 100; p +=0.0001){
        long double r = p/100;
        long double m0 = (s*r*pow(1+r, n))/(12*(pow(1+r, n) - 1));
        if (m0 > m){
            break;
        }
        else
            max_p = p;
    }
    std::cout<<"p = "<<max_p;
    return 0;


}