#include <iostream>
using namespace std;
int main() {
    int n = 7;
    int mid = n / 2;
    for(int i = 0; i < n; i++) {
        int side = mid - abs(mid - i) + 1;
        int gap = n - 2 * side;

        for(int j = 0; j < side; j++)
            cout << "* ";
        for(int j = 0; j < gap * 2 + 1; j++)
            cout << " ";
        for(int j = 0; j < side; j++)
            cout << "* ";
        cout << endl;
    }
    return 0;
}
