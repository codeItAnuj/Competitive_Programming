                    //If you're reading this code,//
                     //you're already cooked...//
//<<<<<<<<<<<<===============>cooked and coded by anyv<===============>>>>>>>>>>>>//

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void helper(){
    ll n;
    cin>>n;
    vector<ll>v(n+1);
    // ll maxm=INT_MIN,minm=INT_MAX;
    for(ll i=1;i<=n;i++){
        cin>>v[i];
        // maxm=max(maxm,v[i]);
        // minm=min(minm,v[i]);
    }


    /// wrong answer solution---

    // ll ans;
    // if(n==1){
    //     cout<<0<<'\n';
    //     return;
    // }
    // if(v[n]==maxm||v[1]==minm){
    //     ans=maxm-minm;
    //     cout<<ans<<'\n';
    //     return;
    // }
    // if(v[1]==maxm){
    //     ans=v[1]-v[2];
    //     cout<<ans<<"\n";
    //     return;
    // }
    // if(v[n]==minm){
    //     ans=v[n-1]-v[n];
    //     cout<<ans<<'\n';
    //     return;
    // }
    // ans=max(maxm-v[1],v[n]-minm);
    // cout<<ans<<'\n';
    // return;
    
    ll diff1=v[n]-v[1];
    ll diff2=INT_MIN,diff3=INT_MIN,diff4=INT_MIN;

    for(ll i=1;i<=n;i++){
        diff2=max(v[i]-v[1],diff2);
    }
    for(ll i=1;i<=n;i++){
        diff3=max(v[n]-v[i],diff3);
    }
    for(ll i=1;i<n;i++){
        diff4=max(diff4,v[i]-v[i+1]);
    }
    cout<<max(max(diff1,diff2),max(diff3,diff4))<<'\n';
    return;
}

//tc-O(n)==O(2000);

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