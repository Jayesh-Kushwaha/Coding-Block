#include <iostream>
using namespace std;
int main() {
    int n = 5;
    for(int i = 0; i < n; i++) {
        for(int s = 0; s < n - i - 1; s++)
            cout << "  ";
        for(int j = 0; j <= i; j++)
            cout << "* ";
        cout << endl;
    }
    for(int i = 0; i < n; i++) {
        for(int s = 0; s <= i; s++)
            cout << "  ";
        for(int j = i; j < n; j++)
            cout << "* ";
        cout << endl;
    }
    return 0;
}
