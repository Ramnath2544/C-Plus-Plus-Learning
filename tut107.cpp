#include<iostream>
using namespace std;

int main(){
  int a[] = {3, 2, 67, 0, 56};
  int *p = &a[4];
  cout<<*(--p)<<endl;
  cout<<*p<<endl; 
  return 0;
}