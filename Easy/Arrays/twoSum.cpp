#include <iostream>
#include <vector>
using namespace std;

class Solution{
    public:
    vector<int> twoSum(const vector<int>& nums, int target){

        for(int i = 0; i < nums.size(); i++){
            for(int j = i+1; j < nums.size(); j++){
                if(nums[i] + nums[j] == target){
                    return {i,j};
                }
            }
        }
        return {};
    }
};

void printArray(const vector<int>& v){
        cout << "[";
        for(int i : v){
            cout << i << " ";
        }
        cout << "]";
}

int main(){
    Solution sol;
    vector<int> result = sol.twoSum({1,4,6,7},10);

    printArray(result);
    return 0;
}