#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    for (int i=1;i<=num;i++)
    {
        if(i%2 == 0)
        {
            cout<<i<<" is a even number"<<endl;
        }
        else
        {
            cout<<i<<" is a off number"<<endl;
        }
    }
}