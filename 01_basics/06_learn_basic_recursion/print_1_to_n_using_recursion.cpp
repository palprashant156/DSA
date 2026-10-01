// Problem: Print 1 to N using Recursion
// Difficulty: Easy
// Article: https://takeuforward.org/recursion/print-1-to-n-using-recursion/
// Video: https://www.youtube.com/watch?v=un6PLygfXrA&list=PLgUwDviBIf0rGlzIn_7rsaR2FQ5e6ZOL9&index=2

#include <iostream>
using namespace std;

void print1toN(int i, int n) {

    if (i > n) {
        return;
    }

    cout << i << endl;

    print1toN(i + 1, n);
}

int main() {

    int n;
    cin >> n;

    print1toN(1, n);

    return 0;
}