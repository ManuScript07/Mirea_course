#include <iostream>
using namespace std;
#include <math.h>
int main()
{
    setlocale(LC_ALL, "rus");
    double a, b, c;
    cin>>a>>b>>c;
    double D = pow(b, 2) - 4*a*c;
    if (D < 0){
        cout<<"Дискриминант меньше нуля, нет решений"<<endl;
    }
    else if (D == 0 and a != 0){
        double x = -b/(2*a) + 0;
        cout<<"Один единственный корень x = "<<x + 0<<endl;
    }
    else if (a != 0 and b != 0){

        double x1 = (-b + sqrt(D))/(2*a);
        double x2 = (-b - sqrt(D))/(2*a);
        cout<<"Два различных корня\n"<<"x1 = "<<x1<<"\n"<<"x2 = "<<x2<<endl;
    }
    else if (a == 0 and b != 0){
        double x = -c/b;
        cout<<"Имеем линейное уравнение x= "<<x + 0<<endl; 
    }
    else if (a == 0 and b == 0){
        if (c == 0) cout<<"x - любое"<<endl;
        else cout<<"Нет решений"<<endl;
    }
    return 0;
}
