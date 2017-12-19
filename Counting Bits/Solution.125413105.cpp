class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> v(num+1);
        for(int i=0, t=1; i<=num; i++)
        {
            if(i<=1)
            {
            v[i]=i;
            }
            else{
            v[i]=v[i-2*t]+1;
            if(i+1==4*t)
            {
                t=2*t;
            }
            }
        }
        return v;
        
    }
};