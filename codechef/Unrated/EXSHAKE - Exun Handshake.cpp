                    //If you're reading this code,//
                     //you're already cooked...//
//<<<<<<<<<<<<===============>cooked and coded by anyv<===============>>>>>>>>>>>>//

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void helper(){
    ll n,m;
    cin>>n>>m;
    vector<ll>v(n+1);
    v[0]=INT_MIN;
    for(ll i=1;i<=n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    ll ans=0;
    ll sum=0;
    for(ll i=1;i<=n;i++){
        sum+=v[i];
        ll temp=(sum*(sum-1))/2;
        if(temp<=m){
            ans=i;
        }
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