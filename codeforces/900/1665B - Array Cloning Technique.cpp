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
    map<ll,ll>mp;
    for(ll i=1;i<=n;i++){
        cin>>v[i];
        mp[v[i]]++;
    }

    ll maxFreq=INT_MIN;
    for(auto el: mp){
        maxFreq=max(el.second,maxFreq);
    }
    
    ll k=n-maxFreq,op=0;
    while(k>maxFreq){
        op++;
        op+=maxFreq;
        k=k-maxFreq;
        maxFreq=maxFreq*2;
    }

    if(k!=0){
        op+=k;
        op++;
    }
    cout<<op<<'\n';
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