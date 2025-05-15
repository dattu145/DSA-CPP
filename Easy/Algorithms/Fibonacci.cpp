#include <iostream>
using namespace std;

class Solution {
public:
    int nthFibonacci(int n) {
        if (n == 0) return 0;
        else if (n == 1) return 1;

        int ft = 0;
        int st = 1;

        for (int i = 2; i <= n; i++) {
            int tt = ft + st;
            ft = st;
            st = tt;
        }

        return st;
    }
};

// Fibonacci using Recursion

class Solution2 {
public:
    int Fibonacci(int n) {
        if (n <= 1) return n;
        return Fibonacci(n - 1) + Fibonacci(n - 2);
    }

    void printFibonacciSeries(int noTerms) {
        int i = 0;
        while (i <= noTerms) {
            cout << Fibonacci(i) << " ";
            i++;
        }
        cout << endl;
    }
};

int main() {
    Solution sol;
    cout << "Fibonacci(5) Iterative: " << sol.nthFibonacci(5) << endl;

    Solution2 sol2;
    cout << "Fibonacci Series (Recursion): ";
    sol2.printFibonacciSeries(10);

    return 0;
}