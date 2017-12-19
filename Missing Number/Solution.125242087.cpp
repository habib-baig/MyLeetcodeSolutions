class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        if(n==0) return 0;
        int flag=0;
        int sum=0,max=nums[0];
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]==0) flag=1;
            sum+=nums[i];
            if(nums[i] > max) max=nums[i];
        }
        if(flag==0) return flag;
        if(max*(max+1)/2-sum == 0) return max+1;
       else return max*(max+1)/2-sum;
    }
};