class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        string as = a;
        int rat=ceil(b.length() / a.length()) ;
        for (int rep = 1; rep <= rat+2; rep++, as += a)
            if (as.find(b) != string::npos) return rep;
        return -1;
    }
};