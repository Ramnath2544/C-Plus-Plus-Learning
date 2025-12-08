#include<iostream>
using namespace std;

union Data
{
  int id;
  double salary;
  char grade;
};


int main(){
  Data d;

  d.id = 101;
  cout<<"id= "<<d.id<<endl;

  d.salary = 55000.75;
  cout<<"salary= "<<d.salary<<endl;

  d.grade = 'A';
  cout<<"Grade= "<<d.grade<<endl;
  return 0;
}