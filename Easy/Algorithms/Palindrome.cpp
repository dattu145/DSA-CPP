#include <iostream>
using namespace std;


class Solution{
    public:
    bool Palindrome(int x){
        if(x < 0){
            return false;
        }

        long long reversed = 0;
        long long temp = x;

        while(temp != 0){
            int digit = temp % 10;
            reversed = reversed * 10 + digit;
            temp = temp / 10;
        }

        return (reversed == x);
    }
};

int main(){
    Solution sol;
    cout << sol.Palindrome(303);
}