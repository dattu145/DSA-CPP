#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int>& nums){
    int i = 0;
    for(int num : nums){
        if(i < 2 || num != nums[i - 2]){
            nums[i++] = num;
        }
    }
    return i;
}

int main(){
    vector<int> nums = {1,1,1,2,2,3};
    cout << removeDuplicates(nums) << endl;

    return 0;
}