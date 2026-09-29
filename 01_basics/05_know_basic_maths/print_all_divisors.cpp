// Problem: Print all Divisors
// Difficulty: easy
// Article: https://takeuforward.org/data-structure/print-all-divisors-of-a-given-number/
// Video: https://youtu.be/1xNbjMdbjug?t=1580
#include "iostream"
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            cout<<i;
        }
    }
}
