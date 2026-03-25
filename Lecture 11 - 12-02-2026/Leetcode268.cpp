#include <iostream>
#include <vector>
using namespace std;

int findMissing(vector<int>& arr) {
    int n=arr.size();
    int expected=n*(n+1)/2;
    int actual=0;
    for(int x:arr) actual+=x;
    return expected-actual;
}

int main() {
    vector<int> a1={3,0,1};
    cout<<findMissing(a1)<<endl;

    vector<int> a2={0,1};
    cout<<findMissing(a2)<<endl;

    vector<int> a3={9,6,4,2,3,5,7,0,1};
    cout<<findMissing(a3)<<endl;

    return 0;
}