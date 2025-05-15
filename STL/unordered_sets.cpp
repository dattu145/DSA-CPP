/*

Unordered sets are part of the C++ Standard Template Library (STL) and provide 
a collection of unique elements with fast insertion, deletion, and lookup operations. 
They are implemented using hash tables, offering average constant-time complexity (O(1)) 
for most operations.

Key Features,

- Stores unique elements (no duplicates allowed)
- Elements are not sorted (unordered)
- Implemented using hash tables
- Fast access (average O(1), worst case O(n))
- Available in C++11 and later.

*/

#include <iostream>
#include <unordered_set>
using namespace std;

void printSet(unordered_set<int>& uset){
    for(int i : uset){
        cout << i << " ";
    }
    cout << endl;
}

int main(){
    unordered_set<int> uset = {1,4,5,2,2,4,5,6};

    uset.insert(24);
    uset.insert({10,20,30});

    uset.erase(24);
    uset.erase(uset.begin());

    // uset.clear();

    if (uset.find(30) != uset.end()) {
        cout << "Element found" << endl;
    }

    size_t count = uset.count(10); // Count occurrences (0 or 1 since it's a set)

    bool isEmpty = uset.empty();
    size_t setSize = uset.size();

    printSet(uset);
    return 0;
}