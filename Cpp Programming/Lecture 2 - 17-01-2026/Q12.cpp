//Find the Sum of Digits of a Given Number using a Loop
#include <iostream>
using namespace std;
int main(){
    int n, sum = 0;
    cout <<"enter the digit:";
    cin>>n;

    for(int i =n; i>=0; i--){
        sum+=i;
    }
    cout<<"the sum of digits is:"<<sum;
    return 0;
}