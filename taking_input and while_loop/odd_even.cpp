#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter a number: ";
    cin>>number;
    if (number%2 == 0)
    {
        cout<<number<<" is a even number";
    }
    else
    {
        cout<<number<<" is a odd number";
    }
}