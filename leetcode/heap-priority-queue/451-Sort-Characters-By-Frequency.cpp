class Solution {
public:
    string frequencySort(string s) {
        typedef long long ll;
        vector<pair<ll,char>>v;
        map<char,ll>mp;
        for(ll i=0;i<s.length();i++){
            mp[s[i]]++;
        }
        for(auto el : mp){
            v.push_back({el.second,el.first});
        }
        sort(v.rbegin(),v.rend());
        string st="";
        for(auto el :v){
            while(el.first--){
                st+=el.second;
            }
        }
        return st;
    }
};