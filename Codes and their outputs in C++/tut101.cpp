#include <iostream>
#include<iomanip>
using namespace std;
int main()
{ 
  //Constant
  // const int a = 3; //read only value cannot be changed
  // cout << "The value of a was: " << a << endl;
  // a = 45;
  // cout << "The value of a is: " << a << endl;
  //Manipulators
  // int a =3, b = 78, c=1233;
  // cout<<"the value of a without setw is:"<<a<<endl;
  // cout<<"the value of b without setw is:"<<b<<endl;
  // cout<<"the value of c without setw is:"<<c<<endl;

  // cout<<"the value of a is:"<<setw(4)<<a<<endl;
  // cout<<"the value of b is:"<<setw(4)<<b<<endl;
  // cout<<"the value of c is:"<<setw(5)<<c<<endl;

  //Operator precedence
  int a = 3, b = 4;
  int c = 8/4*2+a-b;
  cout<<c<<endl;

  return 0;
}