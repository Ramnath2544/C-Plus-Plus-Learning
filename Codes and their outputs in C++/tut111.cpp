#include<iostream>
using namespace std;

int add(int a, int b); // Declaration of function

int main(){
  cout<<add(3,4); // Calling a function
  
  return 0;
}

int add(int a, int b){ // Defines the function
  return a+b;
}