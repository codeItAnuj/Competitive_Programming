class Solution {
public:
    bool isIsomorphic(string s, string t) {
        typedef long long ll;
        set<pair<char,char>>st;
        for(ll i=0;i<s.length();i++){
            st.insert({s[i],t[i]});
        }
        set<ll>s1,s2;
        for(auto el:st){
            s1.insert(el.first);
            s2.insert(el.second);
        }
        if(s1.size()==s2.size() && s1.size()==st.size()){
            return true;
        }
        else{
            return false;
        }
    }
};