class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> q;
        int top=0;
        for(int i=0; i<nums.size(); i++){
            q.push(nums[i]);
        }
        while(k)
        {
            top=q.top();
            q.pop();
            --k;
        }
        return top;
    }
};