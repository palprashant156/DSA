// Problem: STL
// Difficulty: Easy
// Article:
// https://takeuforward.org/c/c-stl-tutorial-most-frequent-used-stl-containers/
// Video: https://www.youtube.com/watch?v=RRVYpIET_RU

#include <algorithm>
#include <iostream>
#include <list>
#include <stack>
#include <string>
#include <vector>
using namespace std;

// ==================== PAIR ====================

void explainPair() {

  pair<int, int> p = {1, 3}; // Creates a pair containing 1 and 3

  cout << p.first << " " << p.second << endl; // Prints first and second values

  pair<int, pair<int, int>> p2 = {1, {3, 4}}; // Creates a nested pair

  cout << p2.first << " "          // Prints 1
       << p2.second.second << " "  // Prints 4
       << p2.second.first << endl; // Prints 3

  pair<int, int> arr[] = {{1, 2}, {2, 5}, {5, 1}}; // Creates an array of pairs

  cout << arr[1].second << endl; // Prints 5
}

// ==================== VECTOR ====================

void explainVector() {

  vector<int> v; // Creates an empty vector

  v.push_back(1); // Adds 1 to the vector

  v.emplace_back(2); // Adds 2 to the vector

  vector<pair<int, int>> vec; // Creates a vector of pairs

  vec.push_back({1, 2}); // Adds pair {1,2}

  vec.emplace_back(1, 2); // Adds pair {1,2}

  vector<int> v1(5, 1000); // Creates 5 elements, all equal to 1000

  vector<int> v2(5); // Creates 5 elements, all initialized to 0

  vector<int> v3(5, 20); // Creates 5 elements, all equal to 20

  vector<int> v4(v3); // Creates a copy of v3

  // ==================== VECTOR ACCESS ====================

  cout << v[0] << endl; // Accesses the first element

  cout << v.at(0) << endl; // Accesses the first element using at()

  cout << v.back() << endl; // Accesses the last element

  // ==================== ITERATORS ====================

  vector<int>::iterator it = v.begin(); // Iterator points to first element

  it++; // Moves iterator one position forward

  cout << *it << endl; // Dereferences iterator and prints the element

  it = it + 1; // Moves iterator one more position forward

  if (it != v.end()) {
    cout << *it << endl; // Prints element if iterator is valid
  }

  vector<int>::iterator it2 =
      v.end(); // end() points just after the last element

  vector<int>::reverse_iterator it3 =
      v.rbegin(); // rbegin() points to last element

  vector<int>::reverse_iterator it4 =
      v.rend(); // rend() points before first element

  // ==================== FOR LOOP WITH ITERATOR ====================

  for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
    cout << *it << " "; // Prints every element using iterator
  }

  cout << endl;

  // ==================== AUTO ITERATOR ====================

  for (auto it = v.begin(); it != v.end(); it++) {
    cout << *it << " "; // Prints every element using auto
  }

  cout << endl;

  // ==================== RANGE BASED LOOP ====================

  for (auto it : v) {
    cout << it << " "; // Prints every element directly
  }

  cout << endl;

  // ==================== ERASE ====================

  // Current vector: {1, 2}

  v.erase(v.begin() + 1); // Removes element at index 1

  // ==================== INSERT ====================

  vector<int> v5(2, 100); // Creates {100,100}

  v5.insert(v5.begin(), 300); // Inserts 300 at the beginning

  // {300,100,100}

  v5.insert(v5.begin() + 1, 2, 10); // Inserts 10 two times at index 1

  // {300,10,10,100,100}

  vector<int> copy(2, 50); // Creates {50,50}

  v5.insert(v5.begin(), copy.begin(), copy.end()); // Inserts copy at beginning

  // {50,50,300,10,10,100,100}

  // ==================== SIZE ====================

  cout << v5.size() << endl; // Returns number of elements

  // ==================== POP BACK ====================

  v5.pop_back(); // Removes the last element

  // ==================== SWAP ====================

  v1.swap(v2); // Swaps contents of v1 and v2

  // ==================== CLEAR ====================

  v5.clear(); // Removes all elements from v5

  // ==================== EMPTY ====================

  cout << v5.empty() << endl; // Returns 1 if empty, otherwise 0
}

// ==================== LIST ====================

void explainList() {

  list<int> ls; // Creates an empty list

  ls.push_back(1); // Adds 1 to the back

  ls.push_back(2); // Adds 2 to the back

  ls.emplace_back(3); // Adds 3 to the back

  ls.push_front(0); // Adds 0 to the front

  ls.emplace_front(4); // Adds 4 to the front
}

// ==================== STACK ====================

void explainStack() {

  stack<int> st; // Creates an empty stack

  st.push(1); // Pushes 1 onto the stack

  st.push(2); // Pushes 2 onto the stack

  st.push(3); // Pushes 3 onto the stack

  st.push(4); // Pushes 4 onto the stack

  st.emplace(5); // Pushes 5 onto the stack

  cout << st.top() << endl; // Returns the top element

  cout << st.size() << endl; // Returns number of elements

  st.pop(); // Removes the top element

  cout << st.empty() << endl; // Returns 1 if stack is empty

  stack<int> st1; // Creates first stack

  stack<int> st2; // Creates second stack

  st1.push(10); // Adds 10 to st1

  st2.push(20); // Adds 20 to st2

  st1.swap(st2); // Swaps contents of st1 and st2
}
void explainQueue() {
  queue<int> q;
  q.push(1);
  q.push(2);
  q.emplace(4);
  q.back() += 5;
  cout << q.back() << endl;
  cout << q.front() << endl;
  q.pop();
  cout << q.front() << endl;
}
void explainPriorityQueue() {
  priority_queue<int> pq; // max heap
  pq.push(1);
  pq.push(2);
  pq.emplace(4);

  cout << pq.top();

  pq.pop();

  cout << pq.top();

  priority_queue<int, vector<int>, greater<int>> pq1; // min heap
  pq1.push(5);
  pq1.push(6);
  pq1.push(7);
  pq1.emplace(10);

  cout << pq.top();
}

void explainSet() {
  set<int> st;
  st.insert(1);
  st.emplace(2);
  st.insert(2);
  st.insert(4);
  st.insert(3);
  auto it = st.find(3);
  auto it = st.find(6);
  st.erase(5);
  int cnt = st.count(1);

  auto it = st.find(3);
  st.erase(it);

  auto it1 = st.find(2);
  auto it2 = st.din(4);
  st.erase(it1, it2);

  auto it = st.lower_bound(2);
  auto it = st.upper_bound(3);
}

void explainMultiSet() {
  multiset<int> ms;
  ms.insert(1);
  ms.insert(1);
  ms.insert(1);

  ms.erase(1);

  int cnt = ms.count(1);

  ms.erase(ms.find(1));

  ms.erase(ms.find(1), ms.find(1) + 2)
}

void explainMap() { // everything is all about key and value
  map<int, int> mpp;
  map<int, pair<int, int>> mpp;
  map<pair<int, int>, int> mpp;

  mpp[1] = 2;
  mpp.emplace({3, 1});

  mpp.insert({2, 4});

  mpp[{2, 3}] = 10;
  {
    {1, 2}, {2, 4}, {3, 1}
  }
  for (auto it : mpp) {
    cout << it.first << " " << it.second << endl;
  }

  cout << map[1];
  cout << map[5];

  auto it = mpp.find(3);
  cout << *(it).second;

  auto it = mpp.find(5);

  auto it = map.lower_bound(2);
  auto it = map.upper_bound(3);
}
bool comp(pair<int, int> p1, pair<int, int> p2) {
  if (p1.second < p2.second)
    return true;
  if (p1.second > p2.second)
    return false;

  if (p1.first > p2.first)
    return true;
}

void explainExtra() {
  sort(a, a + n);
  sort(v.begin(), v.end());

  sort(a + 2, a + 4);

  sort(a, a + n, greater<int>);

  pair<int, int> a[] = {{1, 2}, {2, 1}, {4, 1}};

  sort(a, a + n, comp);

  int num = 7;
  int cnt = __builtin_popcount();

  long long num = 1212324343543;
  int cnt = __builtin_popcount();

  string s = "123";
  sort(s.begin(), s.end());
  do {
    cout << s << endl;
  } while (next_permutation(s.begin(), s.end()));
}
// ==================== MAIN ====================

int main() {

  explainPair(); // Calls pair examples

  explainVector(); // Calls vector examples

  explainList(); // Calls list examples

  explainStack(); // Calls stack examples

  explainQueue(); // Calls queue examples

  return 0; // Ends the program
}
