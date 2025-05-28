#include<bits/stdc++.h>
using namespace std;

void print(int n, int i){
    if (n<i){
        return;
    }
    cout<<n<< endl;
    print(n-1,i);
}
int main(){
    int n;
    cin>>n;
    print(n,1);
}


// input :-
// 5


// output :- 
// 5
// 4
// 3
// 2
// 1
