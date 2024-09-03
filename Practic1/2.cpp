
#include <iostream>
using namespace std;
int main()
{
    setlocale(0, " ");
    double a, b;
    cin>>a>>b;
    double sum = a + b;
    double dif = a - b;
    double mul = a*b;
    if (b==0){
	cout<<"Деление на ноль";
        return 0;
	}
    double ch = a / b;
    return 0;
}