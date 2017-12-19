class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> mymap;
        
        for(int i=0; i<nums.size(); i++)
        {
            auto p=mymap.find(nums[i]);
            if(p != mymap.end()){
              mymap[nums[i]]=1;  
            }
            else
                mymap[nums[i]]=0;
        }
        unordered_map<int,int> :: iterator it;
        for(it=mymap.begin(); it!=mymap.end(); it++)
        {
            if (it->second==0) return it->first;
        }
        
        return 0;
    }
};