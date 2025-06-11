#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;
    int arr[n];
    int max = INT16_MIN;
    int min =INT16_MAX;

    int maxf = INT16_MIN;
    int minf =INT16_MAX;

    int maxn = 0;
    int minn =0;

    unordered_map<int,int> mpp;
    for (int i=0;i<n;i++){
        cin>>arr[i];
        mpp[arr[i]]++;
        if (max<arr[i]){
            max=arr[i];
        }
        if (min>arr[i]){
            min=arr[i];
        }
    }

    for (auto it : mpp ){
        if (maxf<it.second){
            maxf=it.second;
            maxn=it.first;
        }
        if (minf>it.second){
            minf=it.second;
            minn=it.first;
        }
    }
    cout<<"Maximum Element : "<<max<<endl;
    cout<<"Minimum Element : "<<min<<endl;

    cout<<"Maximum Frequent Element : "<<maxn<<endl;
    cout<<"Frequency : "<<maxf<<endl;

    cout<<"Minimum Frequent Element : "<<minn<<endl;
    cout<<"Frequency : "<<minf<<endl;
    
    
    

    
    

}