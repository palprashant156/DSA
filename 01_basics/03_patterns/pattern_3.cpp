// Problem: Pattern 3
// Difficulty: Easy
// Article: https://takeuforward.org/strivers-a2z-dsa-course/must-do-pattern-problems-before-starting-dsa/
// Video: https://www.youtube.com/watch?v=tNm_NNSB3_w&list=PLgUwDviBIf0oF6QL8m22w1hIDC1vJ_BHz&index=3
#include "iostream"
using namespace std;
int main(){
     int n;
     cin>>n;
     for(int i=0;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
     }   
}
