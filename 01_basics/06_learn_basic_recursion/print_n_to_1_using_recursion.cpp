// Problem: Print N to 1 using Recursion
// Difficulty: Easy
// Article: https://takeuforward.org/recursion/print-n-to-1-using-recursion/
// Video: https://www.youtube.com/watch?v=un6PLygfXrA&list=PLgUwDviBIf0rGlzIn_7rsaR2FQ5e6ZOL9&index=2

#include <iostream>
using namespace std;

void nto1(int n) {

    if(n == 0) {
        return;
    }

    cout << n << endl;

    nto1(n - 1);
}

int main() {

    int n;
    cin >> n;

    nto1(n);

    return 0;
}