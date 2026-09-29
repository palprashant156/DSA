// Problem: Count all Digits of a Number
// Difficulty: Easy
// Article: https://takeuforward.org/data-structure/count-digits-in-a-number/
// Video: https://youtu.be/1xNbjMdbjug

#include "iostream"
using namespace std;
int main(){
    int n,count=0;
    cin>>n;
    while(n>0){
        count=count+1;
        n=n/10;
    }
    cout<< count;
}

//time complexity is o(log10(n)) base is decided by from which number it is divided here we do with 10 if we divide by 5 then we use log5 in place of log10.
