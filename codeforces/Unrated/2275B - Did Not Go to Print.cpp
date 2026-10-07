
                    //If you're reading this code,//
                     //you're already cooked...//
//<<<<<<<<<<<<===============>cooked and coded by anyv<===============>>>>>>>>>>>>//

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void helper(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    vector<ll>p(n,10);
    ll freq1=0;
    vector<ll>v;
    for(ll i=0;i<s.length();i++){
        if(s[i]=='1'){
            freq1++;
            v.push_back(i);
        }
        else if(s[i]=='2'){
            if(freq1>0){
                p[v[freq1-1]]=-1;
                v.pop_back();
                freq1--;
            }
            else{
                p[i]=-1;
            }
        }
        else{
            p[i]=-1;
        }
    }
    ll c=0;
    for(ll i=0;i<n;i++){
        if(p[i]==10){
            c++;
        }
    }
    cout<<c<<'\n';
    if(c>0){
        for(ll i=0;i<n;i++){
            if(p[i]==10){
                cout<<i+1<<' ';
            }
        }
    }
    if(c==0){
        cout<<' '<<'\n';
    }
    else{
        cout<<'\n';
    }
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