// Problem: Functions (Pass by Reference and Value)
// Difficulty: Easy
// Article: https://takeuforward.org/data-structure/functions-pass-by-reference-and-value
// Video: https://youtu.be/EAR7De6Goz4?t=3677


#include <iostream>
#include <string>
using namespace std;

void printName(string name){
    cout<<"hey "<< name<<endl;
}
int main(){
    string name;
    cin>>name;
    printName(name);

    string name2;
    cin>>name2;
    printName(name2);

    return 0;
}