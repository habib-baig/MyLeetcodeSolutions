class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        // The essenece of the problem  is to keep track of the minimum element before ith element and check the difference with ith element
        // to know if its the maximum difference else 
        int max_diff=0, diff=0, min_to_left=0; 
        for(int i=0; i<prices.size(); i++)
        {
            if(i==0) min_to_left= prices[0];
            min_to_left=min(prices[i],min_to_left);
            diff=prices[i]-min_to_left;
            max_diff=max(max_diff,diff);
        }
        
        return max_diff;
    }
};