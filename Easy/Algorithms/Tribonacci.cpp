#include <iostream>
using namespace std;

class Solution{
    public:
    int nthTribonacci(int n){
        if(n == 0) return 0;
        else if(n == 1) return 1;

        int ft = 0;
        int st = 1;
        int tt = 1;

        for(int i = 0; i <= n;i++){
            int fourth = ft + st + tt;
            ft = st;
            st = tt;
            tt = fourth;
        }

        return ft;
    }
};

class Solution2{
    public:
    int Tribonacci(int n){
        if(n == 0) return 0;
        if(n == 1 || n == 2) return 1;
        else{
            return Tribonacci(n-1) + Tribonacci(n-2) + Tribonacci(n-3);
        }
    }

    void printTribonacci(int noTerms){
        int i= 0;
        while(i <= noTerms){
            cout << Tribonacci(i) << " ";
            i++;
        }
        cout << endl;
    }
};

int main(){
    Solution sol;
    cout << sol.nthTribonacci(6);

    Solution2 sol2;
    sol2.printTribonacci(9);
}