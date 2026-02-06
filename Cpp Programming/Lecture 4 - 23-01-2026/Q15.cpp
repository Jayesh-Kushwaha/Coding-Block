#include <iostream>
using namespace std;

int main() {
    int n = 5;
    for(int i = 0; i < n; i++) {
        for(int s = 0; s < i * 2; s++)
            cout << " ";
        for(int j = 0; j < n - i; j++)
            cout << "* ";
        cout << endl;
    }
    for(int i = n - 2; i >= 0; i--) {
        for(int s = 0; s < i * 2; s++)
            cout << " ";
        for(int j = 0; j < n - i; j++)
            cout << "* ";
        cout << endl;
    }

    return 0;
}
