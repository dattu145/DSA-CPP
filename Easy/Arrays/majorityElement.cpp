#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int majorityElement(vector<int>& nums){
    sort(nums.begin(),nums.end());
    int n = nums.size();
    return nums[n/2];
}

int main(){
    vector<int> nums = {1,1,2,3,2,2,2,1};
    cout << majorityElement(nums) << endl;

    return 0;
}