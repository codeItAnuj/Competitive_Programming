                    //If you're reading this code,//
                     //you're already cooked...//
//<<<<<<<<<<<<===============>cooked and coded by anyv<===============>>>>>>>>>>>>//

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void helper(){
    ll n,m;
    cin>>n>>m;
    map<string,string>mp;
    for(ll i=1;i<=n;i++){
        string c1,c2;
        cin>>c1>>c2;
        mp[c1]=c2;
    }

    map<string,ll>chef;
    map<string,ll>country;

    for(ll i=1;i<=m;i++){
        string s;
        cin>>s;
        chef[s]++;
        country[mp[s]]++;
    }
    string ans1="",ans2="";
    ll c1=0,c2=0;
    for(auto el : chef){
        if(el.second>c1){
            ans1=el.first;
            c1=el.second;
        }
    }
    for(auto el : country){
        if(el.second>c2){
            ans2=el.first;
            c2=el.second;
        }
    }
    cout<<ans2<<'\n'<<ans1<<'\n';
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
        helper();
    return 0;
}