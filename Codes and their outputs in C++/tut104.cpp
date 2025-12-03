#include <iostream>
using namespace std;

int main()
{
   int a = 3;
   int* b;
   b = &a;
   // &---> (Address of) operator
   cout<<"The address of a is: "<<&a<<endl;
   //* ---> dereference operator (value at)
   cout<<"The address of a is: "<<*b<<endl;
   //pointer to pointer
   int **c = &b;
   cout<<"The address of b is "<<&b<<endl;
   cout<<"The address of b is "<<c<<endl;
   cout<<"The address of c is "<<*c<<endl;
}
