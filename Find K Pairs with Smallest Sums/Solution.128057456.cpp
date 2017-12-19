class Solution {
public:
    vector<pair<int, int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        vector<pair<int, int>> myvec;
        typedef pair<int,pair<int,int>> P;
        priority_queue< P, vector<P>, greater<P> > Q;
        //priority_queue<pair<int,pair<int,int>>,vector<>,> q;
        for(int i=0; i<k && i<nums1.size(); ++i)
        {
            for (int j=0; j<k && j<nums2.size(); ++j){
                
               Q.push(make_pair(nums1[i]+nums2[j],make_pair(nums1[i],nums2[j])));
            }
        }
        while(k-- && !Q.empty() )
        {
            myvec.push_back(Q.top().second);
            Q.pop();
        }
        return myvec;
    }
};