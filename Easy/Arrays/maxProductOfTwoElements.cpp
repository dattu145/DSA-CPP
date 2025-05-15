#include <iostream>
#include <vector>
using namespace std;

class Solution{
    public:
    int maxProduct(vector<int> num){
        int smax = -1;
        int max = -1;

        for(int i = 0; i < num.size(); i++){
            if(max < num[i]){
                smax = max;
                max = num[i];
            }
            else if(smax < num[i]){
                smax = num[i];
            }
        }
        return (max-1) * (smax - 1);
    }
};

int main(){
    Solution sol;
    cout << sol.maxProduct({2,5,8,6}) << endl;
}