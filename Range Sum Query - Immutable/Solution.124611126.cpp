class NumArray {
public:
    vector<int> arr;
    vector <int> sum;
    NumArray(vector<int> nums) {
        arr=nums;
        for (int i=0; i<nums.size(); i++)
        {
            sum.push_back(0);
        }
    }
    
    int sumArray(int loc)
    {
      if (loc==-1) return 0;
      if(sum[loc] !=0) return sum[loc];
      else sum[loc]= arr[loc] + sumArray(loc-1);
     return sum[loc];
    }
    
    int sumRange(int i, int j) {
        return sumArray(j)-sumArray(i-1);
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray obj = new NumArray(nums);
 * int param_1 = obj.sumRange(i,j);
 */