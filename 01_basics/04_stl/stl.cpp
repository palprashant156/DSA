// Problem: STL
// Difficulty: Easy
// Article: https://takeuforward.org/c/c-stl-tutorial-most-frequent-used-stl-containers/
// Video: https://www.youtube.com/watch?v=RRVYpIET_RU

#include <iostream>
#include <vector>
#include <list>
#include <stack>
using namespace std;


// ==================== PAIR ====================

void explainPair() {

    pair<int, int> p = {1, 3};  // Creates a pair containing 1 and 3

    cout << p.first << " " << p.second << endl;  // Prints first and second values


    pair<int, pair<int, int>> p2 = {1, {3, 4}};  // Creates a nested pair

    cout << p2.first << " "              // Prints 1
         << p2.second.second << " "      // Prints 4
         << p2.second.first << endl;     // Prints 3


    pair<int, int> arr[] = {{1, 2}, {2, 5}, {5, 1}};  // Creates an array of pairs

    cout << arr[1].second << endl;  // Prints 5
}


// ==================== VECTOR ====================

void explainVector() {

    vector<int> v;  // Creates an empty vector

    v.push_back(1);  // Adds 1 to the vector

    v.emplace_back(2);  // Adds 2 to the vector


    vector<pair<int, int>> vec;  // Creates a vector of pairs

    vec.push_back({1, 2});  // Adds pair {1,2}

    vec.emplace_back(1, 2);  // Adds pair {1,2}


    vector<int> v1(5, 1000);  // Creates 5 elements, all equal to 1000

    vector<int> v2(5);  // Creates 5 elements, all initialized to 0

    vector<int> v3(5, 20);  // Creates 5 elements, all equal to 20

    vector<int> v4(v3);  // Creates a copy of v3


    // ==================== VECTOR ACCESS ====================

    cout << v[0] << endl;  // Accesses the first element

    cout << v.at(0) << endl;  // Accesses the first element using at()

    cout << v.back() << endl;  // Accesses the last element


    // ==================== ITERATORS ====================

    vector<int>::iterator it = v.begin();  // Iterator points to first element

    it++;  // Moves iterator one position forward

    cout << *it << endl;  // Dereferences iterator and prints the element


    it = it + 1;  // Moves iterator one more position forward

    if (it != v.end()) {
        cout << *it << endl;  // Prints element if iterator is valid
    }


    vector<int>::iterator it2 = v.end();  // end() points just after the last element


    vector<int>::reverse_iterator it3 = v.rbegin();  // rbegin() points to last element

    vector<int>::reverse_iterator it4 = v.rend();  // rend() points before first element


    // ==================== FOR LOOP WITH ITERATOR ====================

    for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";  // Prints every element using iterator
    }

    cout << endl;


    // ==================== AUTO ITERATOR ====================

    for (auto it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";  // Prints every element using auto
    }

    cout << endl;


    // ==================== RANGE BASED LOOP ====================

    for (auto it : v) {
        cout << it << " ";  // Prints every element directly
    }

    cout << endl;


    // ==================== ERASE ====================

    // Current vector: {1, 2}

    v.erase(v.begin() + 1);  // Removes element at index 1


    // ==================== INSERT ====================

    vector<int> v5(2, 100);  // Creates {100,100}

    v5.insert(v5.begin(), 300);  // Inserts 300 at the beginning

    // {300,100,100}

    v5.insert(v5.begin() + 1, 2, 10);  // Inserts 10 two times at index 1

    // {300,10,10,100,100}


    vector<int> copy(2, 50);  // Creates {50,50}

    v5.insert(v5.begin(), copy.begin(), copy.end());  // Inserts copy at beginning

    // {50,50,300,10,10,100,100}


    // ==================== SIZE ====================

    cout << v5.size() << endl;  // Returns number of elements


    // ==================== POP BACK ====================

    v5.pop_back();  // Removes the last element


    // ==================== SWAP ====================

    v1.swap(v2);  // Swaps contents of v1 and v2


    // ==================== CLEAR ====================

    v5.clear();  // Removes all elements from v5


    // ==================== EMPTY ====================

    cout << v5.empty() << endl;  // Returns 1 if empty, otherwise 0
}


// ==================== LIST ====================

void explainList() {

    list<int> ls;  // Creates an empty list

    ls.push_back(1);  // Adds 1 to the back

    ls.push_back(2);  // Adds 2 to the back

    ls.emplace_back(3);  // Adds 3 to the back

    ls.push_front(0);  // Adds 0 to the front

    ls.emplace_front(4);  // Adds 4 to the front
}


// ==================== STACK ====================

void explainStack() {

    stack<int> st;  // Creates an empty stack

    st.push(1);  // Pushes 1 onto the stack

    st.push(2);  // Pushes 2 onto the stack

    st.push(3);  // Pushes 3 onto the stack

    st.push(4);  // Pushes 4 onto the stack

    st.emplace(5);  // Pushes 5 onto the stack


    cout << st.top() << endl;  // Returns the top element

    cout << st.size() << endl;  // Returns number of elements

    st.pop();  // Removes the top element

    cout << st.empty() << endl;  // Returns 1 if stack is empty


    stack<int> st1;  // Creates first stack

    stack<int> st2;  // Creates second stack

    st1.push(10);  // Adds 10 to st1

    st2.push(20);  // Adds 20 to st2

    st1.swap(st2);  // Swaps contents of st1 and st2
}


// ==================== MAIN ====================

int main() {

    explainPair();  // Calls pair examples

    explainVector();  // Calls vector examples

    explainList();  // Calls list examples

    explainStack();  // Calls stack examples

    return 0;  // Ends the program
}
