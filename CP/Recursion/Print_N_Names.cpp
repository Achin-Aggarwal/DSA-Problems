#include<bits/stdc++.h>
using namespace std;

void print(int n){
    if (n<1){
        return;
    }
    cout<<"Achin"<< endl;
    print(n-1);
}
int main(){
    int n;
    cin>>n;
    print(n);
}


// input :-
// 5


// output :- 
// Achin
// Achin
// Achin
// Achin
// Achin
