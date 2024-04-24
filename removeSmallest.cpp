#include<bits/stdc++.h>

using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int i,n;
    cin>>n;
    int flag=1;
    long long  arr[n];

for(i=0;i<n;i++)cin>>arr[i];
if(n==1){
    cout<<"YES"<<endl;
    continue;
}
sort(arr,arr+n);
for(i=0;i<n-1;i++)
    {
       if(abs(arr[i]-arr[i+1])>1 ){
        flag=0;break;
       }
    }
    if(flag==1){
         cout<<"YES"<<endl;
    }else{
    cout<<"NO"<<endl;
    }
}

}
