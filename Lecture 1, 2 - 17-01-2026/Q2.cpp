#include<iostream>
using namespace std;
int main(){
   int p,t,r,s;
   cout<<"enter principle amount: "<<endl;
   cin>>p;
   cout<<"enter time: "<<endl;
   cin>>t;
   cout<<"enter rate: "<<endl;
   cin>>r;
   s = p*t*r;
   cout<<"simple interest is "<<s<<endl;
   return 0;
}