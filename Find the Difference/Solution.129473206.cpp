class Solution {
public:
    char findTheDifference(string s, string t) {
       int sum=0,i=0;
       for(i=0; i<(int)s.size(); i++)
       {
           sum-=s[i];
            sum+=t[i];
       }
        if(i<t.size())
        sum+=t[i];
        return sum;
    }
};