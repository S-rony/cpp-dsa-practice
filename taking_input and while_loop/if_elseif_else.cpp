#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter a number: ";
    cin>>number;
    if (number>0)
    
        cout<<number<<" is a positive number";
    
    else if (number == 0)
    
        cout<<number<<" is neither positive nor negative";
    
    else
    
        cout << number << " is a negative number";
}
    