#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int val){      // constructor
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

int main(){
    return 0;
}

/*

Root: Top node

Leaf: Node with no children

Height: Length of the longest path to a leaf

Depth: Distance from root to a node

*/