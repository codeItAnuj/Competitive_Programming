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
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    map<char,ll>mp;
    for(ll i=0;i<n;i++){
        mp[s[i]]++;
    }
    if(mp.size()==1){
        string s1="";
        while(k--){
            s1+=s[0];
        }
        cout<<s+s1<<'\n';
        return;
    }
    while(k--){
        bool palin=true;
        ll ptr1=0,ptr2=s.size()-1;
        while(ptr1<=ptr2){
            if(s[ptr1]==s[ptr2]){
                ptr1++;
                ptr2--;
            }
            else{
                palin=false;
                break;
            }
        }
        if(palin){
            s+=s[s.length()-1];
        }
        else{
            s=s.substr(0,s.length()/2);
        }
        map<char,ll>mp1;
        for(ll i=0;i<s.length();i++){
            mp1[s[i]]++;
        }
        if(mp1.size()==1){
            string s1="";
            while(k--){
                s1+=s[0];
            }
            cout<<s+s1<<'\n';
            return;
        }
    }
    cout<<s<<'\n';
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