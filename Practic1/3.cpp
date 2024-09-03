#include <iostream>
using namespace std;
int main()
{
    //setlocale(0, " ");
    double b, c;
    cin>>b>>c;
    if (b == 0 and c == 0){
        cout<<"Бесконечно много решений";
        return 0;
    }
    if (b == 0){
        cout<<"Нет решений";
        return 0;
    }
    double x = -c/b;
    cout<<x;
    return 0;
}
