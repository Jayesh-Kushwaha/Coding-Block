//Check Whether a Number is Odd or Even
#include<iostream>
using namespace std;
int main() {

    int num;
    cout << "enter a number: ";
    cin >> num;
    if (num % 2 == 0) {
        cout << "The number is even." << endl;
    } else {
        cout << "The number is odd." << endl;
    }
    return 0;
}
