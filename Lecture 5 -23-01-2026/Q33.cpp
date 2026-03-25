#include <iostream>
using namespace std;
int main() {
    int n = 10;
    for (int i = 1; i <= n; i++) {
        for (int s = 1; s <= n - i; s++) {
            cout << "  ";
        }

        int start = n - i + 1;

        for (int j = start; j <= n - 1; j++) {
            cout << j << " ";
        }

        cout << "0 ";

        for (int j = n - 1; j >= start; j--) {
            cout << j << " ";
        }

        cout << endl;
    }

    return 0;
}
