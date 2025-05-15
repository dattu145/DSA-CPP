/* Single triplet

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> threeSum(vector<int>& nums){
    sort(nums.begin(),nums.end());
    for(int i = 0; i < nums.size(); i++){
        int left = i+1, right= nums.size()-1;
        int sum = nums[i] + nums[left] + nums[right];
        if(sum == 0) return {nums[i],nums[left],nums[right]};
        else if(sum < 0) left++;
        else right--;
    }
    return {};
}

void printArray(vector<int>& arr){
    for(int i : arr){
        cout << i << " ";
    }
    cout << endl;
}

int main(){
    vector<int> nums = {-1,0,1,2,-1,-4};
    vector<int> result = threeSum(nums);
    printArray(result);
    return 0;
}

*/

// Multiple Triplets

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    vector<vector<int>> result;

    for (int i = 0; i < nums.size(); i++) {
        if (i > 0 && nums[i] == nums[i - 1]) continue;

        int left = i + 1;
        int right = nums.size() - 1;

        while (left < right) {
            int sum = nums[i] + nums[left] + nums[right];

            if (sum == 0) {
                result.push_back({nums[i], nums[left], nums[right]});
                
                left++;
                right--;
                while (left < right && nums[left] == nums[left - 1]) left++;
                while (left < right && nums[right] == nums[right + 1]) right--;
            }
            else if (sum < 0) {
                left++;
            }
            else {
                right--;
            }
        }
    }
    return result;
}

void printResult(vector<vector<int>> result) {
    for (auto triplet : result) {
        cout << "[ ";
        for (int num : triplet) {
            cout << num << " ";
        }
        cout << "]" << endl;
    }
}

int main() {
    vector<int> nums = {-1, 0, 1, 2, -1, -4,2,3,-1};
    vector<vector<int>> result = threeSum(nums);
    printResult(result);
    return 0;
}