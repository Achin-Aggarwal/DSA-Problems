#include<bits/stdc++.h>
using namespace std;

void reverse(int i, int n, int a[]){
    if (i>=n/2){
        return;
    }
    swap(a[i],a[n-i-1]);
    return reverse(i+1, n, a);
    
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    reverse(0,n,a);

    for (int i=0;i<n;i++){
        cout << a[i]<<" ";
    }


}


// input :- 
// 5
// 1 2 3 4 5

// output :- 
// 5 4 3 2 1 