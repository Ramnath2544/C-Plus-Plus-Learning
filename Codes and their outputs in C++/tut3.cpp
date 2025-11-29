#include<iostream>
using namespace std;

int main(){
    int num,fact=1;
    cout<<"\nEnter the integer: ";
    cin>>num;
    while(num)
    {
        fact *= num;
        num--;
    }
    cout<<"The factorial is "<<"\n"<<fact<<endl;
    return 0;
}