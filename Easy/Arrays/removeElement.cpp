// Two pointers
// Time - O(n)	
// Space - O(1)	
// Intuition - Use two pointers to skip target elements and overwrite the array in-place

#include <iostream>
#include <vector>
using namespace std;

int removeElement(vector<int>& nums, int val) {
    int k = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != val) {
            nums[k] = nums[i];
            k++;
        }
    }
    return k;
}

int main(){
    vector<int> nums = {1,2,2,4,5,2,8};
    int val = 2;
    cout << removeElement(nums, val) << endl;
    return 0;
}
