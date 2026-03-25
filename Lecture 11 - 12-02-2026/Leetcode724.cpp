#include <iostream>
#include <vector>
using namespace std;

int pivotIndex(vector<int>& arr) {
    int total=0;
    for(int x:arr) total+=x;
    int left=0;
    for(int i=0;i<arr.size();i++) {
        if(left==total-left-arr[i]) return i;
        left+=arr[i];
    }
    return -1;
}

int main() {
    vector<int> a1={1,7,3,6,5,6};
    cout<<pivotIndex(a1)<<endl;

    vector<int> a2={1,2,3};
    cout<<pivotIndex(a2)<<endl;

    vector<int> a3={2,1,-1};
    cout<<pivotIndex(a3)<<endl;
    return 0;
}