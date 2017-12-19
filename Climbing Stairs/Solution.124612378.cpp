class Solution {
public:
    vector<int> climb;
    int climbStairsUtil(int n)
    {
        if (climb[n]) return climb[n];
        else climb[n]=climbStairsUtil(n-1) + climbStairsUtil(n-2);
        return climb[n];
    }
    int climbStairs(int n) {
        climb.resize(n+1);
        fill(climb.begin(),climb.end(),0);
        climb[0]=0;
        climb[1]=1;
        climb[2]=2;
        
        return climbStairsUtil(n);
    }
};