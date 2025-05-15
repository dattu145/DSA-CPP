#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> v1;                        // Empty vector
    vector<int> v2(5);                     // Size 5, default-initialized
    vector<int> v3(5, 10);                 // Size 5, all elements 10
    vector<int> v4 = {4,3,1,2};         // Initializer list
    vector<int> v5(v4);                    // Copy constructor
    vector<int> v6(v4.begin(), v4.end());  // Range constructor

    v1.push_back(4); 
    v1.push_back(5);  
    v1.push_back(6);  

    // Capacity functions -

    // v1.size();	                Number of elements
    // v1.max_size();	            Maximum elements possible
    // v1.capacity();	            Size of allocated storage
    // v1.resize(3);
    // v1.empty();	                Check if vector is empty
    // v1.shrink_to_fit();          Reduce capacity to size


    // Element Access - 

    // v[i] or v.at(i);
    // v.front();
    // v.back();
    // v.data();                    Pointer to raw array

    
    // Modifiers -


    // v.push_back(x)	            Add element to end
    // v.pop_back()	                Remove last element
    // v.insert(pos, x)	            Insert x at pos
    // v.insert(pos, n, x)	        Insert n copies of x
    // v.erase(pos)	                Remove element at pos
    // v.erase(start, end)	        Remove range
    // v.clear()	                Remove all elements
    // v.swap(v2)	                Swap with another vector
    // v.assign(n, x)	            Assign n copies of x
    // v.assign(begin, end)	        Assign from range



    // Iterators -


    // v.begin()	                Iterator to first element
    // v.end()	                    Iterator past last element
    // v.rbegin()	                Reverse iterator to last
    // v.rend()	                    Reverse iterator before first
    // v.cbegin()	                Constant iterator to first
    // v.cend()	                    Constant iterator past last


    // other operations -


    // sort(v.begin(), v.end())	                    Sort vector
    // reverse(v.begin(), v.end())	                Reverse vector
    // find(v.begin(), v.end(), x)	                Find value x
    // count(v.begin(), v.end(), x)	                Count value x
    // accumulate(v.begin(), v.end(), 0)	        Sum of elements (requires <numeric>)

    // begin() & end() are pointers that contain the addr of first and last elements

    sort(v4.begin(), v4.end()); // inorder to use it we need <algorithm> header file;


    // Iterating through vectors

    for(int i : v4){
        cout << i;
    }

    for (auto it = v4.begin(); it != v4.end(); ++it)
        cout << *it << " ";

    return 0;
}


// Mini Project -


/*
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> v;
    int choice, val, index;

    while (true) {
        std::cout << "\n---- Vector Operations Menu ----\n";
        std::cout << "1. Push Back\n2. Pop Back\n3. Insert at Index\n4. Erase at Index\n";
        std::cout << "5. Display Vector\n6. Sort\n7. Reverse\n8. Exit\n";
        std::cout << "Enter choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "Enter value to push: ";
                std::cin >> val;
                v.push_back(val);
                break;
            case 2:
                if (!v.empty()) v.pop_back();
                else std::cout << "Vector is empty.\n";
                break;
            case 3:
                std::cout << "Enter index and value: ";
                std::cin >> index >> val;
                if (index >= 0 && index <= v.size())
                    v.insert(v.begin() + index, val);
                else
                    std::cout << "Invalid index!\n";
                break;
            case 4:
                std::cout << "Enter index to erase: ";
                std::cin >> index;
                if (index >= 0 && index < v.size())
                    v.erase(v.begin() + index);
                else
                    std::cout << "Invalid index!\n";
                break;
            case 5:
                std::cout << "Vector: ";
                for (int i : v) std::cout << i << " ";
                std::cout << "\n";
                break;
            case 6:
                std::sort(v.begin(), v.end());
                break;
            case 7:
                std::reverse(v.begin(), v.end());
                break;
            case 8:
                return 0;
            default:
                std::cout << "Invalid choice!\n";
        }
    }
}
*/



/*
1. What is a std::vector really?

    A std::vector is essentially:

    - A dynamic array.

    - It stores elements contiguously in memory (just like arrays).

    - It automatically resizes itself when needed.






2. What Happens When You Push Elements?

    - it allocates more space (usually double the current capacity), copies all old data to new memory, and then adds the new item.

    - Time Complexity of push_back() is O(1), because doubling doesn't happen every time.

    - But worst case time complexity is O(n) when resizing happens






3 . Contiguous Memory = Superpower + Weakness

Pros:

- Works perfectly with pointers and legacy arrays.

- Can be passed to functions like qsort, memcpy.

- CPU cache-friendly: adjacent elements = faster access.

Cons:

- Resizing is expensive (copies everything).

- Inserting/deleting in the middle = O(n) (because elements must shift).

- Can't efficiently grow at front (push_front() is a no-go).





4. Memory & Safety Stuff

- Automatic memory management: Vector cleans up its own memory on destruction.

- Safe access: Use .at() for bounds-checked access.


Use Case	                                            Better Choice

Need fast inserts/deletes at beginning/middle	    std::list, deque
Need constant-time lookup by key	                std::map, unordered_map
Multi-threaded concurrent access	                std::vector needs locks or std::atomic elements.
*/