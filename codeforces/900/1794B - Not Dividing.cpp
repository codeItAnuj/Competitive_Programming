                    //If you're reading this code,//
                     //you're already cooked...//
//<<<<<<<<<<<<===============>cooked and coded by anyv<===============>>>>>>>>>>>>//

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void helper(){
    ll n;
    cin>>n;
    ll c=0;
    vector<ll>v(n+1);
    for(ll i=1;i<=n;i++){
        cin>>v[i];
        if(v[i]==1){
            c++;
            v[i]+=1;
        }
    }

    for(ll i=1;i<n;i++){
        if(v[i+1]%v[i]==0){
            c++;
            v[i+1]+=1;
        }
    }
    for(ll i=1;i<=n;i++){
        cout<<v[i]<<' ';
    }
    cout<<'\n';
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