
#include<bits/stdc++.h>
using namespace std;

int main(){
int t;cin>>t;
while(t--){
  int n,m;
  cin>>n>>m;
  int a[n][m];
  int i,j,k,count=0;
  int r[n]={0},c[m]={0};

  for(i=0;i<n;i++){
    for(j=0;j<m;j++){
        cin>>a[i][j];
        if(a[i][j]==1){
            r[i]=1;c[j]=1;
        }
    }
  }

  for(i=0;i<n;i++){
    for(j=0;j<m;j++){
        if(r[i]==0 && c[j]==0){
            r[i]=1;c[j]=1;count++;a[i][j]=1;
        }
    }
  }
  if(count%2==1){
    cout<<"Ashish"<<endl;
  }else{
  cout<<"Vivek"<<endl;
  }
}

}
