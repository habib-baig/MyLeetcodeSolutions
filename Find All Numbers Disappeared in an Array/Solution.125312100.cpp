class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        vector <int> v;
        int mmap[n+1]={0};
        
                 for(int i=0; i<n; i++)
                 {
                   mmap[nums[i]]=1;  
                 }
        for(int i=1; i<=n; i++)
        {
            if (mmap[i]==0 ) v.push_back(i); 
        }
        return v;
    }
};