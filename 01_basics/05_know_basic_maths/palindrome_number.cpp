// Problem: Palindrome Number
// Difficulty: Easy
// Article: https://takeuforward.org/data-structure/check-if-a-number-is-palindrome-or-not/
// Video: https://youtu.be/1xNbjMdbjug?t=1230

#include <iostream>
using namespace std;

int main() {

    int n, reverse = 0;
    cin >> n;
     int dup=n;

    while (n > 0) {

        int digit = n % 10;          // Get the last digit
        reverse = reverse * 10 + digit; // Add digit to reversed number
        n = n / 10;                  // Remove the last digit
    }

    if(dup==reverse){
        cout<<"true";
        
    }
    else{
        cout<<"false";
    }

    return 0;
}