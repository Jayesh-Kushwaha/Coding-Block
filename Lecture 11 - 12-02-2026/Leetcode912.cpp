#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> sortArray(vector<int>& arr) {
    sort(arr.begin(),arr.end());
    return arr;
}

int main() {
    vector<int> a1={5,2,3,1};
    vector<int> r1=sortArray(a1);
    for(int x:r1) cout<<x<<" ";
    cout<<endl;

    vector<int> a2={5,1,1,2,0,0};
    vector<int> r2=sortArray(a2);
    for(int x:r2) cout<<x<<" ";
    cout<<endl;

    return 0;
}