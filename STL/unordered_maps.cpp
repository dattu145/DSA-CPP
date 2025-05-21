#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

/*

Implementation - Hash Table
Key Order - No guaranteed order
LookUp Time - O(1)
Insertion Time - O(1)
Fast access, no order

*/

int main(){
    unordered_map<string, int> umap = {{"three",3}, {"one",1}, {"two",2}};

    umap["Age"] = 20;
    umap.insert({"hands",5});

    //Access :
    int val = umap["hands"];

    for (auto &p : umap) {
        cout << p.first << ": " << p.second << endl;
    }

    // Size :
    cout << "Size: " << umap.size() << endl;

    // Clear :
    umap.clear();

    cout << "Empty? " << (umap.empty() ? "Yes" : "No") << endl;

    //Count Elements :

    umap.count("Age");
     
    //Check if Key exists :
    if (umap.find("Age") != umap.end()) {
    // key exists
    } else {
    // key doesn't exist
    }

    if (umap.count("Age") > 0) {
    // key exists
    }

    //Erase by key :
    umap.erase("Age");

    //Erase by Iterator :
    auto it = umap.find("Age");
    if (it != umap.end())
        umap.erase(it);

}