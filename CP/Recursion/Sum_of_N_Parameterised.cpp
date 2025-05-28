#include<bits/stdc++.h>
using namespace std;

int print(int n, int i){
    if (n<1){
        return i;
    }
    return print(n-1,i+n);
    
}
int main(){
    int n;
    cin>>n;
    cout<< print(n,0);
}

// input :-
// 10


// output :- 
// 55