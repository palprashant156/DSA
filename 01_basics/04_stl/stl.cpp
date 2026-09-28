// Problem: STL
// Difficulty: Easy
// Article: https://takeuforward.org/c/c-stl-tutorial-most-frequent-used-stl-containers/
// Video: https://www.youtube.com/watch?v=RRVYpIET_RU

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <numeric>
using namespace std;

// ==================== PAIR ====================

// Function: explainPair
// What it does: Demonstrates the use of std::pair in C++.
// Why it is needed: Pairs are used to combine together two values that may be of different data types.
// Input/Parameters: None
// Returns: Nothing
// Main logic: Shows how to create, nest, and access pairs, as well as arrays of pairs.
void explainPair() {

    pair<int, int> p = {1, 3};  // Creates a pair 'p' containing two integers: 1 and 3

    cout << p.first << " " << p.second << endl;  // Accesses and prints the first and second values of the pair

    pair<int, pair<int, int>> p2 = {1, {3, 4}};  // Creates a nested pair 'p2' where the second element is another pair

    cout << p2.first << " "              // Prints the first element of 'p2', which is 1
         << p2.second.second << " "      // Accesses the second element of 'p2', then its second element, printing 4
         << p2.second.first << endl;     // Accesses the second element of 'p2', then its first element, printing 3

    pair<int, int> arr[] = {{1, 2}, {2, 5}, {5, 1}};  // Creates an array of pairs named 'arr'

    cout << arr[1].second << endl;  // Accesses the second element of the pair at index 1 in the array, printing 5
}


// ==================== VECTOR ====================

// Function: explainVector
// What it does: Demonstrates the use of std::vector in C++.
// Why it is needed: Vectors are dynamic arrays that resize themselves automatically when elements are added or removed.
// Input/Parameters: None
// Returns: Nothing
// Main logic: Covers insertion, copying, accessing elements, iterating, erasing, and other vector operations.
void explainVector() {

    vector<int> v;  // Creates an empty vector 'v' that can store integers

    v.push_back(1);  // Adds the integer 1 to the end of the vector

    v.emplace_back(2);  // Dynamically constructs and adds 2 to the end (often faster than push_back)


    vector<pair<int, int>> vec;  // Creates an empty vector 'vec' that stores pairs of integers

    vec.push_back({1, 2});  // Adds the pair {1,2} to the end of 'vec'

    vec.emplace_back(1, 2);  // Constructs and adds the pair {1,2} in place at the end of 'vec'


    vector<int> v1(5, 1000);  // Creates a vector 'v1' with 5 elements, all initialized to 1000

    vector<int> v2(5);  // Creates a vector 'v2' with 5 elements, all initialized to 0 (default for int)

    vector<int> v3(5, 20);  // Creates a vector 'v3' with 5 elements, all initialized to 20

    vector<int> v4(v3);  // Creates a vector 'v4' as a copy of 'v3'


    // ==================== VECTOR ACCESS ====================

    cout << v[0] << endl;  // Accesses and prints the first element using the subscript operator

    cout << v.at(0) << endl;  // Accesses and prints the first element safely with bounds checking using at()

    cout << v.back() << endl;  // Accesses and prints the last element in the vector


    // ==================== ITERATORS ====================

    vector<int>::iterator it = v.begin();  // Creates an iterator 'it' pointing to the first element

    it++;  // Moves the iterator one position forward to the second element

    cout << *it << endl;  // Dereferences the iterator to print the value it points to


    it = it + 1;  // Moves the iterator one position forward (now at end since v has 2 elements)

    if (it != v.end()) {  // Checks if the iterator is within valid bounds
        cout << *it << endl;  // Prints the element if the iterator is valid
    }


    vector<int>::iterator it2 = v.end();  // Creates an iterator pointing to the theoretical element just after the last element

    vector<int>::reverse_iterator it3 = v.rbegin();  // Creates a reverse iterator pointing to the last element

    vector<int>::reverse_iterator it4 = v.rend();  // Creates a reverse iterator pointing to the theoretical element before the first one


    // ==================== FOR LOOP WITH ITERATOR ====================

    for (vector<int>::iterator loop_it = v.begin(); loop_it != v.end(); loop_it++) {  // Loops from the beginning to the end of the vector
        cout << *loop_it << " ";  // Dereferences and prints each element
    }

    cout << endl;  // Prints a newline for formatting


    // ==================== AUTO ITERATOR ====================

    for (auto auto_it = v.begin(); auto_it != v.end(); auto_it++) {  // Loops using 'auto' to automatically deduce iterator type
        cout << *auto_it << " ";  // Dereferences and prints each element
    }

    cout << endl;  // Prints a newline for formatting


    // ==================== RANGE BASED LOOP ====================

    for (auto val : v) {  // Iterates directly over the elements in the vector
        cout << val << " ";  // Prints each element
    }

    cout << endl;  // Prints a newline for formatting


    // ==================== ERASE ====================

    // Current vector 'v': {1, 2}

    v.erase(v.begin() + 1);  // Removes the element at index 1 (the second element)


    // ==================== INSERT ====================

    vector<int> v5(2, 100);  // Creates 'v5' with 2 elements, both initialized to 100

    v5.insert(v5.begin(), 300);  // Inserts the value 300 at the beginning of 'v5'

    // 'v5' is now: {300, 100, 100}

    v5.insert(v5.begin() + 1, 2, 10);  // Inserts two copies of 10 starting at index 1

    // 'v5' is now: {300, 10, 10, 100, 100}


    vector<int> copy(2, 50);  // Creates a vector 'copy' with 2 elements, both 50

    v5.insert(v5.begin(), copy.begin(), copy.end());  // Inserts all elements of 'copy' at the beginning of 'v5'

    // 'v5' is now: {50, 50, 300, 10, 10, 100, 100}


    // ==================== SIZE ====================

    cout << v5.size() << endl;  // Prints the number of elements currently in 'v5'


    // ==================== POP BACK ====================

    v5.pop_back();  // Removes the last element from 'v5'


    // ==================== SWAP ====================

    v1.swap(v2);  // Swaps all contents between vector 'v1' and vector 'v2'


    // ==================== CLEAR ====================

    v5.clear();  // Removes all elements from 'v5', leaving it empty


    // ==================== EMPTY ====================

    cout << v5.empty() << endl;  // Prints 1 (true) if 'v5' is empty, otherwise 0 (false)
}


// ==================== LIST ====================

// Function: explainList
// What it does: Demonstrates the use of std::list in C++.
// Why it is needed: Lists are doubly-linked lists allowing fast insertions and deletions anywhere.
// Input/Parameters: None
// Returns: Nothing
// Main logic: Shows adding elements to both the front and the back of the list.
void explainList() {

    list<int> ls;  // Creates an empty doubly-linked list 'ls' that stores integers

    ls.push_back(1);  // Adds 1 to the back of the list

    ls.push_back(2);  // Adds 2 to the back of the list

    ls.emplace_back(3);  // Constructs and adds 3 in-place at the back of the list

    ls.push_front(0);  // Adds 0 to the front of the list (faster than vector's insert at beginning)

    ls.emplace_front(4);  // Constructs and adds 4 in-place at the front of the list
}


// ==================== STACK ====================

// Function: explainStack
// What it does: Demonstrates the use of std::stack in C++.
// Why it is needed: Stacks follow the Last-In-First-Out (LIFO) principle, useful for certain algorithms.
// Input/Parameters: None
// Returns: Nothing
// Main logic: Covers pushing, popping, accessing the top, checking size, and swapping stacks.
void explainStack() {

    stack<int> st;  // Creates an empty stack 'st' for integers

    st.push(1);  // Pushes 1 onto the top of the stack

    st.push(2);  // Pushes 2 onto the top of the stack

    st.push(3);  // Pushes 3 onto the top of the stack

    st.push(4);  // Pushes 4 onto the top of the stack

    st.emplace(5);  // Constructs and pushes 5 in-place onto the top of the stack


    cout << st.top() << endl;  // Accesses and prints the top element (5) without removing it

    cout << st.size() << endl;  // Prints the number of elements currently in the stack

    st.pop();  // Removes the top element (5) from the stack

    cout << st.empty() << endl;  // Prints 1 (true) if stack is empty, otherwise 0 (false)


    stack<int> st1;  // Creates a first stack 'st1'

    stack<int> st2;  // Creates a second stack 'st2'

    st1.push(10);  // Pushes 10 onto 'st1'

    st2.push(20);  // Pushes 20 onto 'st2'

    st1.swap(st2);  // Swaps all elements between 'st1' and 'st2'
}


// ==================== QUEUE ====================

// Function: explainQueue
// What it does: Demonstrates the use of std::queue in C++.
// Why it is needed: Queues follow the First-In-First-Out (FIFO) principle, useful for scheduling and BFS.
// Input/Parameters: None
// Returns: Nothing
// Main logic: Shows enqueuing, dequeuing, and accessing the front and back elements.
void explainQueue(){
    queue<int> q;  // Creates an empty queue 'q' for integers
    q.push(1);  // Adds 1 to the back of the queue
    q.push(2);  // Adds 2 to the back of the queue
    q.emplace(4);  // Constructs and adds 4 in-place at the back of the queue
    
    q.back() += 5;  // Accesses the back element (4) and adds 5 to it, making it 9
    cout << q.back() << endl;  // Prints the back element (9)
    cout << q.front() << endl;  // Prints the front element (1)
    
    q.pop();  // Removes the front element (1) from the queue
    cout << q.front() << endl;  // Prints the new front element (2)
}


// ==================== PRIORITY QUEUE ====================

// Function: explainPriorityQueue
// What it does: Demonstrates the use of std::priority_queue in C++.
// Why it is needed: Priority queues are used when elements need to be accessed based on priority (max/min).
// Input/Parameters: None
// Returns: Nothing
// Main logic: Covers max-heaps (default) and min-heaps, pushing elements, and popping top priorities.
void explainPriorityQueue(){
    priority_queue<int> pq; // Creates a priority queue 'pq' which acts as a max-heap
    pq.push(1);  // Pushes 1 into the priority queue
    pq.push(2);  // Pushes 2 into the priority queue
    pq.emplace(4);  // Constructs and pushes 4 into the priority queue (4 becomes the top)

    cout << pq.top() << endl;  // Prints the largest element (4)

    pq.pop();  // Removes the largest element (4)

    cout << pq.top() << endl;  // Prints the new largest element (2)

    priority_queue<int, vector<int>, greater<int>> pq1; // Creates a priority queue 'pq1' functioning as a min-heap
    pq1.push(5);  // Pushes 5 into the min-heap
    pq1.push(6);  // Pushes 6 into the min-heap
    pq1.push(7);  // Pushes 7 into the min-heap
    pq1.emplace(10);  // Constructs and pushes 10 into the min-heap

    cout << pq1.top() << endl;  // Prints the smallest element (5)
}


// ==================== SET ====================

// Function: explainSet
// What it does: Demonstrates the use of std::set in C++.
// Why it is needed: Sets store unique elements in sorted order, providing fast lookup and insertion.
// Input/Parameters: None
// Returns: Nothing
// Main logic: Covers insertion, finding elements, erasing, counting, and bounds checking.
void explainSet(){
    set<int> st;  // Creates an empty set 'st' for integers
    st.insert(1);  // Inserts 1 into the set
    st.emplace(2);  // Constructs and inserts 2 into the set
    st.insert(2);  // Attempts to insert 2 again, but it's ignored because sets hold unique values
    st.insert(4);  // Inserts 4 into the set
    st.insert(3);  // Inserts 3 into the set (elements are stored in sorted order: {1, 2, 3, 4})
    
    auto it1 = st.find(3);  // Returns an iterator pointing to the element 3
    auto it2 = st.find(6);  // Returns st.end() because 6 is not in the set
    
    st.erase(5);  // Erases 5 if it exists (does nothing here since 5 is not present)
    int cnt = st.count(1);  // Returns 1 if 1 is in the set, otherwise 0

    auto it3 = st.find(3);  // Finds the element 3
    if (it3 != st.end()) {  // Checks if 3 was found
        st.erase(it3);  // Erases the element 3 using its iterator
    }

    auto it4 = st.find(2);  // Finds the element 2
    auto it5 = st.find(4);  // Finds the element 4
    if (it4 != st.end() && it5 != st.end()) {  // Ensures both iterators are valid
        st.erase(it4, it5);  // Erases elements in range [it4, it5), meaning it erases 2, but keeps 4
    }

    auto it6 = st.lower_bound(2);  // Returns an iterator to the first element >= 2
    auto it7 = st.upper_bound(3);  // Returns an iterator to the first element > 3
}


// ==================== MULTISET ====================

// Function: explainMultiSet
// What it does: Demonstrates the use of std::multiset in C++.
// Why it is needed: Multisets allow duplicate elements while keeping them sorted.
// Input/Parameters: None
// Returns: Nothing
// Main logic: Covers insertion, counting, and erasing specific or multiple duplicate elements.
void explainMultiSet(){
    multiset<int> ms;  // Creates an empty multiset 'ms' for integers
    ms.insert(1);  // Inserts 1 into the multiset
    ms.insert(1);  // Inserts another 1 into the multiset (duplicates are allowed)
    ms.insert(1);  // Inserts a third 1 into the multiset

    ms.erase(1);  // Erases ALL instances of 1 from the multiset

    int cnt = ms.count(1);  // Counts how many times 1 appears (currently 0)

    ms.insert(1);  // Inserting 1 back to demonstrate erasing a single instance
    ms.insert(1);  // Inserting another 1
    
    auto it = ms.find(1);  // Finds the first occurrence of 1
    if (it != ms.end()) {  // Checks if 1 exists
        ms.erase(it);  // Erases only the single instance of 1 pointed to by the iterator
    }

    ms.insert(1);  // Inserting another 1 for range erase demonstration
    auto start_it = ms.find(1);  // Iterator to the first 1
    if (start_it != ms.end()) {  // Checks if 1 exists
        auto end_it = start_it;  // Create a copy of the iterator
        advance(end_it, 2);  // Advances the end iterator by 2 positions
        ms.erase(start_it, end_it);  // Erases elements in the range [start_it, end_it)
    }
}


// ==================== MAP ====================

// Function: explainMap
// What it does: Demonstrates the use of std::map in C++.
// Why it is needed: Maps store elements as key-value pairs where keys are unique and stored in sorted order.
// Input/Parameters: None
// Returns: Nothing
// Main logic: Covers inserting, accessing, finding, and iterating over map elements.
void explainMap(){
    map<int, int> mpp1;  // Creates a map 'mpp1' with integer keys and integer values
    map<int, pair<int, int>> mpp2;  // Creates a map 'mpp2' with integer keys and pair values
    map<pair<int, int>, int> mpp3;  // Creates a map 'mpp3' with pair keys and integer values


    mpp1[1] = 2;  // Inserts key 1 with value 2 into 'mpp1'
    mpp1.emplace(3, 1);  // Constructs and inserts key 3 with value 1 in-place

    mpp1.insert({2, 4});  // Inserts the pair {2, 4} into 'mpp1'

    mpp3[{2, 3}] = 10;  // Inserts key pair {2, 3} with value 10 into 'mpp3'
    
    // mpp1 currently holds: {1, 2}, {2, 4}, {3, 1}
    for (auto it : mpp1) {  // Iterates through all key-value pairs in 'mpp1'
        cout << it.first << " " << it.second << endl;  // Prints the key (it.first) and value (it.second)
    }

    cout << mpp1[1] << endl;  // Accesses and prints the value associated with key 1
    cout << mpp1[5] << endl;  // Tries to access key 5; since it doesn't exist, it inserts {5, 0} and prints 0

    auto it1 = mpp1.find(3);  // Returns an iterator to the element with key 3
    if (it1 != mpp1.end()) {  // Checks if the key was found
        cout << it1->second << endl;  // Prints the value associated with key 3
    }

    auto it2 = mpp1.find(5);  // Returns an iterator to the element with key 5

    auto it3 = mpp1.lower_bound(2);  // Returns an iterator to the first element with key >= 2
    auto it4 = mpp1.upper_bound(3);  // Returns an iterator to the first element with key > 3
}


// ==================== CUSTOM COMPARATOR ====================

// Function: comp
// What it does: Custom comparator function used to define a custom sorting logic.
// Why it is needed: Needed when default sorting is not sufficient (e.g., sorting pairs by a specific condition).
// Input/Parameters: Two integer pairs (p1, p2) to compare.
// Returns: true if p1 should be placed before p2, otherwise false.
// Main logic: Compares the second elements first. If equal, compares the first elements in descending order.
bool comp(pair<int, int> p1, pair<int, int> p2){
    if (p1.second < p2.second) return true;  // Sorts by second element in ascending order
    if (p1.second > p2.second) return false;  // If p1's second is greater, p1 should come after p2

    // If second elements are equal, sort by first element in descending order
    if (p1.first > p2.first) return true;  // If p1's first is greater, p1 comes before p2
    return false;  // Otherwise, p1 comes after p2
}


// ==================== EXTRA ALGORITHMS ====================

// Function: explainExtra
// What it does: Demonstrates various extra utility functions and algorithms provided by STL.
// Why it is needed: These are commonly used operations like sorting, bit counting, and permutations.
// Input/Parameters: None
// Returns: Nothing
// Main logic: Shows array/vector sorting, custom sorting, __builtin_popcount, and next_permutation.
void explainExtra(){
    int a[] = {4, 2, 1, 5, 3};  // Creates a sample array 'a'
    int n = 5;  // The number of elements in the array

    sort(a, a + n);  // Sorts the entire array 'a' in ascending order
    
    vector<int> v = {4, 2, 5, 1, 3};  // Creates a sample vector 'v'
    sort(v.begin(), v.end());  // Sorts the entire vector 'v' in ascending order

    sort(a + 2, a + 4);  // Sorts a specific sub-range of the array 'a'

    sort(a, a + n, greater<int>());  // Sorts the entire array 'a' in descending order using greater<int>

    pair<int, int> a2[] = {{1, 2}, {2, 1}, {4, 1}};  // Creates an array of pairs 'a2'
    int n2 = 3;  // The number of elements in the array of pairs

    sort(a2, a2 + n2, comp);  // Sorts the array of pairs using the custom comparator 'comp'


    int num = 7;  // A sample integer (7 is 111 in binary)
    int cnt = __builtin_popcount(num);  // Returns the number of set bits (1s) in the binary representation of 'num'

    long long num2 = 1212324343543;  // A sample long long integer
    int cnt2 = __builtin_popcountll(num2);  // Returns the number of set bits for a long long integer

    string s = "123";  // A sample string
    sort(s.begin(), s.end());  // Sorts the string to ensure we start from the lexicographically smallest permutation
    do {
        cout << s << endl;  // Prints the current permutation of the string
    } while (next_permutation(s.begin(), s.end()));  // Rearranges the string into the next permutation, returns false when done
}


// ==================== MAIN ====================

// Function: main
// What it does: The main execution point of the program.
// Why it is needed: Serves as the entry point to run the code.
// Input/Parameters: None (standard signature for basic main).
// Returns: 0 indicating successful execution.
// Main logic: Sequentially calls each function to demonstrate different STL containers and algorithms.
int main() {

    explainPair();  // Calls the function demonstrating pair examples

    explainVector();  // Calls the function demonstrating vector examples

    explainList();  // Calls the function demonstrating list examples

    explainStack();  // Calls the function demonstrating stack examples

    explainQueue();  // Calls the function demonstrating queue examples
    
    explainPriorityQueue();  // Calls the function demonstrating priority queue examples

    explainSet();  // Calls the function demonstrating set examples

    explainMultiSet();  // Calls the function demonstrating multiset examples

    explainMap();  // Calls the function demonstrating map examples
    
    explainExtra();  // Calls the function demonstrating extra algorithms

    return 0;  // Ends the program successfully
}
