//Reverse a Number using a While Loop
#include <iostream>
using namespace std;

int main() {
    int num, reverse = 0, rem;
    
    cout << "enter number: ";
    cin >> num;
    
    for(int i = num; i != 0; i = i / 10) {

        rem = i % 10;

        reverse = reverse * 10 + rem;
    }

    cout << "reverse number : " << reverse;

    return 0;
}

