#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"enter two number : ";
    cin>>a>>b;
    a = a+b - (b=a);
    cout<<"the value of a is:"<<a<<endl;
    cout<<"the value of b is:"<<b<<endl;


}