class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int n=nums.size(),sum=0;
        if(n==0) return 0;
        sort(nums.begin(),nums.end());
        for(int i=0; i<n; i=i+2)
        {
            sum=sum+nums[i];
        }
        return sum;
    }
};