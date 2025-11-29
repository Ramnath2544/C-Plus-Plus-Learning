#include<iostream>
using namespace std;
int main(){
   // float d = 34.4;
   // long double e = 34.4;
   // cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;
   // cout<<"The size of 34.4f is "<<sizeof(e)<<endl;
   // cout<<"The size of 34.4F is "<<sizeof(34.4F)<<endl;
   // cout<<"The size of 34.4l is "<<sizeof(34.4l)<<endl;
   // cout<<"The size of 34.4L is "<<sizeof(e)<<endl; 

   // int a = 10;
   // float b = a; //a=10.0 implcit conversion
   // cout<<b<<endl;
   // char ch = 'A';
   // int x = ch;//ASCII A is 65 implcit conversion
   // cout<<x;
   // int a =5;
   // float b = 2.5;
   // float c = a+b; // type of a is int and type of b is 2.5 and type of c is float a+b a =5.0 and b= 2.5 implcit conversion
   // cout<<c;
   // implicit conversion is type of type casting

   // //Explicit type casting
   // int a =45;
   // float b = 45.46;
   // cout<<"The value of a is "<<(float)a<<endl;
   // cout<<"The value of b is "<<int(b)<<endl;

   //Reference variable
   //Rajat - raj - supercoder
   float x = 455;
   float &y = x;
   x = 45;
   cout<<x<<endl;
   cout<<y<<endl;
   return 0;
} // i = num // Pass by value
// num =5
// i=5
// while(num){
// --num;}
// num = 0
// i=5 
// pass by reference
//  x = 455
// =x &y ;
// copy the value of 455 in y variable
// x = 45
//x = 13
// y=13