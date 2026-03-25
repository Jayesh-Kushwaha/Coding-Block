#include <iostream>
using namespace std;

int main() {
    int n = 5;

    for (int i = 1; i <= n; i++) {
        for (int s = 1; s <= n - i; s++) {
            cout << "  ";
        }

        int val = i;
        for (int j = 1; j <= i; j++) {
            cout << val << " ";
            val++;
        }

        val -= 2;
        for (int j = 1; j < i; j++) {
            cout << val << " ";
            val--;
        }

        cout << endl;
    }

    return 0;
}
