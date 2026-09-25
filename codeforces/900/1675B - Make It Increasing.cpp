                    //If you're reading this code,//
                     //you're already cooked...//
//<<<<<<<<<<<<===============>cooked and coded by anyv<===============>>>>>>>>>>>>//

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void helper(){
    ll n;
    cin>>n;
    vector<ll>v(n);
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
    ll op=0;
    for(ll i=n-2;i>=0;i--){
        while(v[i]>=v[i+1] && v[i]!=0){
            v[i]=v[i]/2;
            op++;
        }
    }
    ll c=0;
    for(ll i=0;i<n-1;i++){
        if(v[i]<v[i+1]){
            c++;
        }
    }
    if(c==n-1){
        cout<<op<<'\n';
        return;
    }
    cout<<-1<<'\n';
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