#include <iostream>
using namespace std;

void name(int n) {

    if (n == 0) {          // Base condition
        return;
    }

    cout << "prashant" << endl;  // Print name

    name(n - 1);           // Call the function again
}

int main() {

    int n;
    cin >> n;

    name(n);

    return 0;
}