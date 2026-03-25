#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

int thirdMax(vector<int>& nums) {
    set<int> distinct(nums.begin(), nums.end());
    vector<int> arr(distinct.begin(), distinct.end());
    sort(arr.rbegin(), arr.rend());
    
    if (arr.size() >= 3) return arr[2];
    return arr[0];
}

int main() {
    vector<int> nums1 = {3,2,1};
    cout << thirdMax(nums1) << endl;
    
    vector<int> nums2 = {1,2};
    cout << thirdMax(nums2) << endl;
    
    vector<int> nums3 = {2,2,3,1};
    cout << thirdMax(nums3) << endl;
    
    return 0;
}