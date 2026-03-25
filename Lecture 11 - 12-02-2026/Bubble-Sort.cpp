#include <iostream>
using namespace std;

int findmin(int nums[], int n) {
    int l = 0, r = n - 1;

    while (l < r) {
        int mid = l + (r - l) / 2;

        if (nums[mid] > nums[r]) {
            l = mid + 1;
        } else {
            r = mid;
        }
    }
    return nums[l];
}

int main() {
    int nums1[] = {3,4,5,1,2};
    int nums2[] = {4,5,6,7,0,1,2};
    int nums3[] = {11,13,15,17};

    int n1 = 5;
    int n2 = 7;
    int n3 = 4;

    cout << findmin(nums1, n1) << endl;
    cout << findmin(nums2, n2) << endl;
    cout << findmin(nums3, n3) << endl;

    return 0;
}