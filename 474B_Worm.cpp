//problem link:http://codeforces.com/contest/474/problem/B


#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
//ll rangArray[100002];
vector<ll>rangArray;
 
int main(){
    int n;cin>>n;
    ll x;
    int j=1,pvx=0;
    for(int i=0;i<n;i++){
        cin>>x;
        x=x+pvx;
        rangArray.push_back(x);
        pvx=x;j=x+1;
        }
 
    int q,qi;cin>>q;
    for(int i=0;i<q;i++){
        cin>>qi;
        ll pos = upper_bound(rangArray.begin(), rangArray.end(), qi) - rangArray.begin();
        if(rangArray[pos-1]==qi){
            cout<<pos<<endl;
        }
        else{
            cout<<pos+1<<endl;
        }
 
}
}
