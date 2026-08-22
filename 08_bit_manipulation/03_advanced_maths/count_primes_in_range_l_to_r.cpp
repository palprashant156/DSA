// Problem: Count primes in range L to R
// Difficulty: Hard
// Article: https://takeuforward.org/data-structure/sieve-of-eratosthenes
// Video: https://youtu.be/g5Fuxn_AvSk?si=fv6Q-Po7wrMW0a5n

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
