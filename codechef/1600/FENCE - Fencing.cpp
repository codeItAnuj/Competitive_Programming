                    //If you're reading this code,//
                     //you're already cooked...//
//<<<<<<<<<<<<===============>cooked and coded by anyv<===============>>>>>>>>>>>>//

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void helper(){
    ll l,r,k;
    cin>>l>>r>>k;
    map<pair<ll,ll>,ll>mp;
    for(ll i=1;i<=k;i++){
        ll x,y;
        cin>>x>>y;
        mp.insert({{x,y},1});
    }
    ll c=0;
    for(auto el:mp){
        if(mp.find({el.first.first-1,el.first.second})==mp.end()){
            c++;
        }
        if(mp.find({el.first.first+1,el.first.second})==mp.end()){
            c++;
        }
        if(mp.find({el.first.first,el.first.second-1})==mp.end()){
            c++;
        }
        if(mp.find({el.first.first,el.first.second+1})==mp.end()){
            c++;
        }
    }
    cout<<c<<'\n';
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