# include <algorithm> 
# include <iostream> 
using namespace std;

int findKthLargest(int nums[], int n, int k) {
    sort(nums, nums + n); 
    return nums[n - k];
}
int main() {
    int nums[] = {3, 2, 1, 5, 6, 4};
    int n = sizeof(nums) / sizeof(nums[0]);
    int k = 2;
    int result = findKthLargest(nums, n, k);
    cout << "The " << k << "th largest element is: " << result << endl;
}