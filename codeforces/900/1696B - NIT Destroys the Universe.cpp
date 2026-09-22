                    //If you're reading this code,//
                     //you're already cooked...//
//<<<<<<<<<<<<===============>cooked and coded by anyv<===============>>>>>>>>>>>>//

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void helper(){
    ll n;cin>>n;

    vector<ll>v(n+1);
    for(ll i=1;i<=n;i++){
        cin>>v[i];
    }
    ll ind1=1;

    for(ll i=1;i<=n;i++){
        if(v[i]!=0){
            ind1=i;
            break;
        }
    }

    ll ind2=n;

    for(ll i=n;i>=1;i--){
        if(v[i]!=0){
            ind2=i;
            break;
        }
    }

    bool zero=false;

    for(ll i=ind1;i<=ind2;i++){
        if(v[i]==0){
            zero=true;
        }
    }
    ll c=0;
    for(ll i=1;i<=n;i++){
        if(v[i]==0){
            c++;
        }
    }
    if(c==n){
        cout<<0<<'\n';
        return;
    }
    if(zero){
        cout<<2<<'\n';
        return;
    }
    cout<<1<<'\n';
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