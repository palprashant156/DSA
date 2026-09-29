// Problem: Reverse a number
// Difficulty: Easy
// Article: https://takeuforward.org/maths/reverse-digits-of-a-number
// Video: https://youtu.be/1xNbjMdbjug?t=930

#include <iostream>
using namespace std;

int main() {

    int n, reverse = 0;

    cin >> n;

    while (n > 0) {

        int digit = n % 10;          // Get the last digit
        reverse = reverse * 10 + digit; // Add digit to reversed number
        n = n / 10;                  // Remove the last digit
    }

    cout << reverse;

    return 0;
}