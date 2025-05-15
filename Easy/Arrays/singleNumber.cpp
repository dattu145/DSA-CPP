// P-136 : Single Number - Leetcode

#include <iostream>
using namespace std;

void findUnique(int arr[], int size) {
    cout << "Unique values are: ";
    for (int i = 0; i < size; i++) {
        bool isUnique = true;
        for (int j = 0; j < size; j++) {
            if (i != j && arr[i] == arr[j]) {
                isUnique = false;
                break;
            }
        }

        if (isUnique) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}

int main() {
    int arr[] = {1, 2, 3, 8, 1, 2, 3, 4, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    findUnique(arr, size);

    return 0;
}

// or

/*

Intuition,

The XOR (^) operator has a few powerful properties:

a ^ a = 0→ any number XORed with itself is zero
a ^ 0 = a → any number XORed with zero remains unchanged

XOR is commutative and associative, meaning the order of operations doesn’t matter,

So,

If every element in the array appears twice, except for one unique number, all the duplicates cancel each other out:

a ^ a ^ b ^ b ^ c = (a ^ a) ^ (b ^ b) ^ c = 0 ^ 0 ^ c = c

This allows us to find the unique number in linear time without using extra space.




Approach,


- Initialize a variable result = 0

- Traverse the array and XOR each element with result

- At the end, result holds the number that appears only once





Complexity,


Time Complexity: O(n)
We traverse the array once, where n is the number of elements.

Space Complexity: O(1)
No extra space is used regardless of the input size.





Code,

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;
        for (int num : nums) {
            result ^= num;
        }
        return result;
    }
};

*/