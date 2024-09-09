#include <iostream>
using namespace std;

int main() {
  int a = atoi("52");
  cout << a << endl;
  string b = "1234";
  int c = atoi(b.data());
  cout << "atoi(\"1234\") = " << c << endl;
  return 0;
}