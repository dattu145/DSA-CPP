#include <iostream>
#include <vector>
using namespace std;

class Solution{
    public:
    vector<int> addToArray(vector<int> num, int k){

        for(int i = num.size()-1; i >= 0; i--){
            num[i] += k;
            k = num[i]/10;
            num[i] %= 10;
        }
        while(k > 0){
            num.insert(num.begin(), k%10);
            k /= 10;
        }
        return num;
    }

    void printArray(vector<int> num) {
        for(int i : num){
            cout << i;
        }
    }

};

int main(){
    Solution sol;
    sol.printArray(sol.addToArray({1,2,6,8},2));
} 