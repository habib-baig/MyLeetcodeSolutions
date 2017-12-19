class Solution {
public:
    bool isAnagram(string s, string t) {
        int sz=s.size(), tz=t.size();
        unordered_map<int,int> mymap;
        for(int i=0; i<sz; i++)
        {
        mymap[s[i]]++;  
        }
        for(int i=0; i<tz; i++)
        {
        mymap[t[i]]--;  
        }
        unordered_map<int,int> :: iterator it;
        for(it=mymap.begin(); it!=mymap.end(); it++)
        {
            if (it->second !=0) return false;
        }
        return true;
    }
};