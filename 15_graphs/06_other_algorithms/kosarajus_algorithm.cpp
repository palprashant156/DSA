// Problem: Kosaraju's algorithm
// Difficulty: Hard
// Article: https://takeuforward.org/graph/strongly-connected-components-kosarajus-algorithm-g-54/
// Video: https://www.youtube.com/watch?v=V8qIqJxCioo&list=PLgUwDviBIf0rGEWe64KWas0Nryn7SCRWw&index=27

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <unordered_map>
#include <unordered_set>
#include <cmath>
#include <numeric>

using namespace std;

// Fast I/O helper
void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    // Redirect input/output files for local execution if present
    // Create input.txt and output.txt in the same directory to use this
    if (fopen("input.txt", "r")) {
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    }
    #endif
}

class Solution {
public:
    void solve() {
        // Your code goes here
        
    }
};

int main() {
    fast_io();
    
    int t = 1;
    // Uncomment the line below if the problem has multiple test cases
    // cin >> t;
    
    while (t--) {
        Solution sol;
        sol.solve();
    }
    
    return 0;
}
