                    //If you're reading this code,//
                   //you're already cooked.......//
//<<<<<<<<<<<<===============>cooked and coded by anyv<===============>>>>>>>>>>>>//

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void helper(){
    ll n,m,x,y;
    cin>>n>>m>>x>>y;
    // if(n!=1 && m!=1){
    //     map<pair<ll,ll>,ll>mp;
    //     mp[{1,1}]=abs(x-1)+abs(y-1);
    //     mp[{1,m}]=abs(x-1)+abs(y-m);
    //     mp[{n,1}]=abs(x-n)+abs(y-1);
    //     mp[{n,m}]=abs(x-n)+abs(y-m);
    //     vector<ll>v;
    //     for(auto el: mp){
    //         v.push_back(el.second);
    //     }
    //     sort(v.begin(),v.end());
    //     for(auto el: mp){
    //         if(el.second==*(v.end()-1)){
    //             cout<<el.first.first<<' '<<el.first.second<<' ';
    //             mp[el.first]=-1;
    //         } 
    //     }
    //     for(auto el: mp){
    //         if(el.second==*(v.end()-2)){
    //             cout<<el.first.first<<' '<<el.first.second;
    //         }
    //     }
    //     cout<<'\n'; 
    // }
    // else{
    //     if(n==1){
    //         cout<<1<<' '<<1<<' '<<1<<' '<<m<<'\n';
    //     }
    //     else if(m==1){
    //         cout<<1<<' '<<1<<' '<<n<<' '<<1<<'\n';
    //     }
    // }
    // return;
    cout<<1<<' '<<1<<' '<<n<<' '<<m<<'\n';
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