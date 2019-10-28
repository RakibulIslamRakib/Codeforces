//Problem link:http://codeforces.com/contest/706/problem/B



#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

//ll rangArray[100002];
vector<ll>rangArray;

int main(){
    int n;cin>>n;
    ll x;
    for(int i=0;i<n;i++){
        cin>>x;
        rangArray.push_back(x);
        }
    sort(rangArray.begin(),rangArray.end());
    int q,qi;cin>>q;
    for(int i=0;i<q;i++){
        cin>>qi;
        ll pos = upper_bound(rangArray.begin(), rangArray.end(), qi) - rangArray.begin();
            cout<<pos<<endl;

    }
}



