// Problem: If ElseIf
// Difficulty: Easy
// Article: https://takeuforward.org/if-else/if-else-statements/
// Video: https://youtu.be/EAR7De6Goz4?t=1259

#include <iostream>
using namespace std;

int main() {
    int age;
    cin >> age;
    if (age >= 18) {
        cout << "you are eligible\n";
    } else {
        cout << "you are not eligible\n";
    }
    return 0;
}