#include <iostream>
using namespace std;
#include <math.h>
int main()
{
    setlocale(0, " ");
    int a, b, c;
    cin>>a>>b>>c;
    if (a == 1 and b == 1)
        cout<<"Светло"<<endl;
    else if (c == 1)
        cout<<"Светло"<<endl;
    else
        cout<<"Темно"<<endl;
    return 0;
}