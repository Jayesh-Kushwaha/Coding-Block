#include <iostream>
using namespace std;
int main() {
    int n = 7;
    int mid = n / 2;
    for(int i = 0; i < n; i++) {
        int stars = n - 2 * abs(mid - i);
        int spaces = abs(mid - i);

        for(int s = 0; s < spaces; s++)
            cout << "  ";
        for(int j = 0; j < stars; j++)
            cout << "* ";
        cout << endl;
    }

    return 0;
}
