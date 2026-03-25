#include <iostream>
using namespace std;
int main() {
    int n = 5;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i; j++)
            cout << "* ";

        cout << "  ";

        for (int k = 0; k < i; k++)
            cout << "  ";
        for (int k = 0; k < n - i; k++)
            cout << "* ";

        cout << endl;
    }
    return 0;
}
