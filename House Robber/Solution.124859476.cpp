class Solution {
public:
    int rob(vector<int>& nums) {
    int sum_pre_pre_house = 0;
    int sum_pre_house = 0, temp=0;
    
    for (int i=0; i<nums.size(); i++)
    {
        temp=nums[i]+sum_pre_pre_house;
        sum_pre_pre_house=sum_pre_house;
        sum_pre_house=max(sum_pre_house,temp);
    }
    
    return sum_pre_house;
    }
};