#include<bits/stdc++.h>
using namespace std;

bool palindrome(int i, int n, char a[]){
    if (i>=n/2){
        return true;
    }
    if(a[i] != a[n-i-1]){
        return false;
    }
    
    return palindrome(i+1, n, a);
    
}
int main(){
    int n;
    cin>>n;
    char a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    cout << palindrome(0,n,a);


}

// input :- 
// 5
// M A D A M


// output :- 
// 1