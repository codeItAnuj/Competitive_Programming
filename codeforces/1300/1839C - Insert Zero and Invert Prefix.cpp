                    //If you're reading this code,//
                   //you're already cooked.......//
//<<<<<<<<<<<<===============>cooked and coded by anyv<===============>>>>>>>>>>>>//

///<<< Linkedin Id:  https://www.linkedin.com/in/anuj7yadav/
///<<< CodeForces:   https://codeforces.com/profile/codeItAnuj
///<<< CodeChef:     https://www.codechef.com/users/anujyadav17
///<<< AtCoder:      https://atcoder.jp/users/anyv
///<<< LeetCode:     https://leetcode.com/u/anyv/
///<<< Codolio:      https://codolio.com/profile/anyv

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

// Debug Overloads
#ifdef anyv_codes
#define debug(x) _print(x); cerr << endl;
#else
#define debug(x)
#endif

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(double t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T> void _print(multiset <T> v);

template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.first); cerr << ","; _print(p.second); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

void helper(){
    ll n;
    cin>>n;
    vector<ll>v(n+1);
    for(ll i=1;i<=n;i++){
        cin>>v[i];
    }
    if(v[n]==1){
        cout<<"NO\n";
        return;
    }
    cout<<"YES\n";
    vector<pair<ll,ll>>blk;
    ll el=0,c1=0;
    for(ll i=1;i<n;i++){
        el++;
        if(v[i]==1){
            c1++;
        }
        if(v[i]==0 && v[i+1]==1){
            blk.push_back({el,c1});
            el=0,c1=0;
        }
    }
    el++;
    blk.push_back({el,c1});
    reverse(blk.begin(),blk.end());
    for(auto el: blk){
        ll el1=el.first-1;
        while(el1--){
            cout<<0<<' ';
        }
        cout<<el.second<<' ';
    }
    cout<<'\n';
    return;
}


//tc-O(n);
//sc-O(n);


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