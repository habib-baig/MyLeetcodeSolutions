class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int diff=0,sums[n+1];
        sums[0]=0;
        for(int i=1; i<=n; i++)
        {
            sums[i]=sums[i-1]+nums[i-1];
        }
        
        for(int i=0; i<n; i++)
        {
            for(int j=i+2; j<=n;j++)
            {
                diff=sums[j]-sums[i];
                if(k==0)
                {
                    if(diff==0)
                    return true;
                }
                else {
                    if(diff%k==0)
                    return true;
                }
            }
        }
        return false;
    }
};