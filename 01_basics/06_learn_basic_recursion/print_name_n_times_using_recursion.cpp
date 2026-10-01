// Problem: Print name N times using recursion
// Difficulty: Easy
// Article: https://takeuforward.org/recursion/print-name-n-times-using-recursion/
// Video: https://www.youtube.com/watch?v=un6PLygfXrA&list=PLgUwDviBIf0rGlzIn_7rsaR2FQ5e6ZOL9&index=2

#include <iostream>
using namespace std;
void name(int n){
    if(n==0){
        return;
    }
    cout<<"prashant"<<endl;
    name(n-1);
}
int main(){
    int n;
    cin>>n;
    name(n);
    return 0;
}
