class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map <int,int> mymap;
        int n=nums.size(), n2=n/2;
        if(n==0) return 0;
        for(int i=0;i<n; i++)
        {
            if(mymap.find(nums[i])!=mymap.end())
            {
                mymap[nums[i]]++;
            }
            else
               mymap[nums[i]]=1; 
        }
        map <int,int> :: iterator it;
        for(it=mymap.begin(); it!=mymap.end(); it++)
        {
            if(it->second > n2) return it->first;
        }
    }
};