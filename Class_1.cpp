// Все функции до main
#include <iostream>
using namespace std;


int A = 10, B = 20;
void Hello(){
    cout<<"Hello"<<endl;
}
int Summ(int i, int k){
    return i+k;
}

int main(){
   setlocale(0, " "); 
   std::cout<<"Hello world\n"<<std::endl; // либо using namespace std;
   int a = 1, b = 2;
   // atoi - переводит литерал в число
   int c = atoi("1132132121241242141242112");
   cout<<c<<endl;
   // В c++ допускается and и or
   Hello();
   cout<<"Ответ "<<Summ(a, b);
   return 0; // 1 - ошибка вызванная пользователем
}