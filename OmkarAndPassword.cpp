#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
int main()
{

    int t;cin>>t;
    while(t--){
        ll n;
        ll a[n];
        cin>>n;set<ll>s;
        for(int i=0;i<n;i++){
            cin>>a[i];
            s.insert(a[i]);
        }
        if(s.size()==1){
            cout<<n<<endl;
        }else{
        cout<<1<<endl;
        }
    }
}
