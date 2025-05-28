#include<bits/stdc++.h>
using namespace std;

void print(int n, int i){
    if (n<i){
        return;
    }
    cout<<i<< endl;
    print(n,i+1);
}
int main(){
    int n;
    cin>>n;
    print(n,1);
}


// input :-
// 5


// output :- 
// 1
// 2
// 3
// 4
// 5