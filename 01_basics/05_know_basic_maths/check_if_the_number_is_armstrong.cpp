// Problem: Check if the Number is Armstrong
// Difficulty: Easy
// Article: https://takeuforward.org/maths/check-if-a-number-is-armstrong-number-or-not/
// Video: https://youtu.be/1xNbjMdbjug?t=1418

#include <iostream>
using namespace std;

int main() {

    int n, sum = 0;

    cin >> n;           // Take input
    int dup = n;        // Store original number

    while (n > 0) {

        int y = n % 10;             // Get last digit
        sum = sum + y * y * y;      // Add cube of digit
        n = n / 10;                 // Remove last digit
    }

    if (sum == dup) {
        cout << "true";
    }
    else {
        cout << "false";
    }

    return 0;
}