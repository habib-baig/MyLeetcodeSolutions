class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> sorted;
        int i=0,j=0;
        while ( i<nums1.size() && j<nums2.size())
        {
            if(nums1[i]<nums2[j])
            {
                sorted.push_back(nums1[i]);
                i++;
            }
            else if(nums1[i]>nums2[j])
            {
                sorted.push_back(nums2[j]);
                j++;
            }
            else
            {
                sorted.push_back(nums2[j]);
                j++;
                sorted.push_back(nums1[i]);
                i++;
            }
            
        }
        
        while(i<nums1.size())
        {
            sorted.push_back(nums1[i]);
                i++;
        }
        
        while(j<nums2.size())
        {
            sorted.push_back(nums2[j]);
            j++;
        }
        int k=sorted.size();
        if(k%2==0)
        {
            return (sorted[k/2]+sorted[k/2-1])/2.0;
            
        }
        else
            return sorted[int(k/2)];
    }
};