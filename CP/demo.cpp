#include<bits/stdc++.h>
using namespace std;

void print(int n, int i){
    if (n>i){
        return;
    }
    
    print(n+1,i);
    cout<<n<< endl;
}
int main(){
    int n;
    cin>>n;
    print(1,n);
}