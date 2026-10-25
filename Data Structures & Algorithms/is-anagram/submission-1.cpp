class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> mpp;
        unordered_map<char,int> mp;
        int n = s.size();
        int m = t.size();
        if(n != m) return false;
        for(int i=0;i<n;i++){   
            mpp[s[i]]++;
            mp[t[i]]++;
        }
        
        if(mpp == mp) return true;
        return false;
    }
};
