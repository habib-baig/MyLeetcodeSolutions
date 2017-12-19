class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> myvec(numRows);
        for(int i=0; i<numRows; i++){    
            if(i==0) myvec[0].push_back(1);
            else{
                int j=0;
                while(j<=i)
                {
                    if(j==0) myvec[i].push_back(1);
                    else if(j==i) myvec[i].push_back(1);
                    else
                        myvec[i].push_back(myvec[i-1][j-1]+myvec[i-1][j]);
                    j++;
                }
            }
    }
return myvec;                                           
}
};