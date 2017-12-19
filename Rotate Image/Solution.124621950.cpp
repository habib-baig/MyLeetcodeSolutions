class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int temp,col=matrix[0].size();
        int col1=col, row1=row;
        
        for (int cur_row=0; cur_row<row1/2; cur_row++)
        {
            
            
            for(int cur_col=cur_row; cur_col<col-cur_row-1; cur_col++)
            {
            temp=matrix[cur_row][cur_col]; 
             matrix[cur_row][cur_col]= matrix[row-1-cur_col][cur_row];
             matrix[row-1-cur_col][cur_row]= matrix[row-1-cur_row][col-1-cur_col];
             matrix[row-1-cur_row][col-1-cur_col]=matrix[cur_col][col-1-cur_row];
             matrix[cur_col][col-1-cur_row]=temp;
            }
        }
        
    }
};