// Find the Maximum of Three Numbers
#include<iostream>
using namespace std;
int main() {
    int a;
    int b;
    int c;

   cout<<"enter the first number:"; cin>>a;
   cout<<"enter the second number:"; cin>>b;
   cout<<"enter the third number:"; cin>>c;

   if (a>b and a>c) {
    cout <<a<<" is maximum"<<endl;
   } 
   else  if (b>c)  {
    cout <<b<<" is maximum"<<endl;
   } 
   else {
    cout <<c<<" is maximum"<<endl;
   }
    return 0;
}
