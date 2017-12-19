class Solution {
public:
    int subarraySum(vector<int>& a, int k) {
      int n=a.size();
      int count=0;
        int sum[n+1];
        sum[0]=0;
      for(int i=1; i<=n; i++)
      {
          sum[i]=sum[i-1]+a[i-1];
      }
        
    for(int i=0; i<=n; i++)
    {
    for(int j=i+1; j<=n; j++)
    {
        if(sum[j]-sum[i]==k) count++;
        //if(sum[j]-sum[i]>=k) break;
    }
    }
    return count;
    }
};