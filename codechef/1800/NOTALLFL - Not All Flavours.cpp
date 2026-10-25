                    //If you're reading this code//
                //you're already cooked......//
//<<<<<<<<<<<<===============>cooked and coded by anyv<===============>>>>>>>>>>>>//

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void helper(){
    ll n,k;
    cin>>n>>k;
    unordered_map<ll,ll>last_occurrness;
    for(ll i=1;i<=k;i++){
        last_occurrness[i]=-1;
    }
    ll ans=0;
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        ans=max(ans,i-last_occurrness[x]-1);
        last_occurrness[x]=i;
    }
    for(ll i=1;i<=k;i++){
        ans=max(ans,n-last_occurrness[i]-1);
    }
    cout<<ans<<'\n';
    return;
}

//Modular Addition----
//>> (int1 + int2) % dvsr == ((int1 % dvsr) + (int2 % dvsr)) % dvsr;

//Modular Substraction----
//>> (int1 - int2) % dvsr == ((int1 % dvsr) - (int2 % dvsr) + dvsr) % dvsr;

//Modular Multiplication----
//>> (int1 * int2) % dvsr == ((int1 % dvsr) * (int2 % dvsr)) % dvsr;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll t;
    cin>>t;
    while(t--){
        helper();
    }
    return 0;
}