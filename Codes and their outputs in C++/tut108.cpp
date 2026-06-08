#include<iostream>
using namespace std;

 typedef struct student
{
  /* data */
  int studentId;
  string name;
  float salary;
}details;


int main(){
  details rajat;
  rajat.studentId = 1;
  rajat.name = "Rajat Garg";
  rajat.salary = 12000.5;
  cout<<rajat.name<<endl;

  return 0;
}