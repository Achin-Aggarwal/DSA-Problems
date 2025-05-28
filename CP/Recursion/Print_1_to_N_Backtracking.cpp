#include<bits/stdc++.h>
using namespace std;

void print(int n, int i){
    if (n<1){
        return;
    }
    
    print(n-1,i);
    cout<<n<< endl;
}
int main(){
    int n;
    cin>>n;
    print(n,n);
}



// input :-
// 5


// output :- 
// 1
// 2
// 3
// 4
// 5