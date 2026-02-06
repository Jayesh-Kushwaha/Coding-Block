#include <iostream>
using namespace std;

int main() {
    int n = 7;
    int mid = n / 2;
    for(int i = 0; i < n; i++) {
        int outer = abs(mid - i);
        int inner = n - 2 * outer - 2;
        for(int s = 0; s < outer; s++)
            cout << "  ";
        cout << "*";
        if(inner >= 0) {
            for(int s = 0; s < inner; s++)
                cout << "  ";
            cout << " *";
        }
        cout << endl;
    }
    return 0;
}
