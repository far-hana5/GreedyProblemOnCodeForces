#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;cin>>n;int minDiff=INT_MAX;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
     for(int i=1;i<n;i++){

        int diff=arr[i]-arr[i-1];
       if (diff < minDiff) {
            minDiff = diff;
        }
    }
    cout<<minDiff<<endl;
}
}

