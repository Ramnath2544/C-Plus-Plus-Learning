#include<iostream>
using namespace std;

int sum(int a , int b);
void g();

int main(){
  int num1, num2;
  cout<<"Enter the first number: "<<endl;
  cin>>num1;
  cout<<"Enter the Second number: "<<endl;
  cin>>num2;
  cout<<"The sum is "<<sum(num1, num2)<<endl;
  // num1 and num2 are actual parameters
  g(); // calling a function
  return 0;
}

int sum(int a , int b){ // a and b are formal parameters
  int c = a+b;
  return c;
}

void g(){
  cout<<"Hello, Rajat";
}