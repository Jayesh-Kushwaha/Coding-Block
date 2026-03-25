#include<iostream>
using namespace std;

int main() {
    int a;
    cout<<"enter the first number:";
    cin>>a;

    int b;
    cout<<"enter the second number:";
    cin>>b;
    
    while(b !=0){
        int rem =a%b;
        a=b;
        b=rem;
    }
    cout<<a;

}
