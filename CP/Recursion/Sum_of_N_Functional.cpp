#include<bits/stdc++.h>
using namespace std;

int print(int n){
    if (n<1){
        return 0 ;
    }
    return n + print(n-1);
    
}
int main(){
    int n;
    cin>>n;
    cout<< print(n);
}

// input :-
// 5


// output :- 
// 15