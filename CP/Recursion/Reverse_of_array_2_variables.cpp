#include<bits/stdc++.h>
using namespace std;

void reverse(int l, int r, int n[]){
    if (l>=r){
        return;
    }
    swap(n[l], n[r]);
    return reverse(l+1, r-1, n);
    
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    reverse(0,n-1,a);

    for (int i=0;i<n;i++){
        cout << a[i]<<" ";
    }

}


// input :- 
// 5
// 1 2 3 4 5

// output :- 
// 5 4 3 2 1 