//Find the Sum of N Natural Numbers
#include<iostream>
using namespace std;
int main(){
    int n, sum = 0;
    cout << "enter numbers: ";
    cin >> n;

    for(int i = 1; i <= n; ++i) {
        sum += i;
    }

    cout  << sum << endl;
    return 0;

}