class Solution {
    public int[][] generateMatrix(int n) {
        int top=0;
        int bottom=n-1;
        int left=0;
        int right=n-1;
        int count=1;
        int ans[][]=new int[n][n];
        while(top<=bottom && left<=right)
        {
            for(int i=left;i<=right;i++)
            {
               ans[top][i]=count;
               count++;
            }
           top++;
            for(int i=top;i<=bottom;i++)
            {
                ans[i][right]=count;
                count++;
            }
            right--;
            for(int i=right;i>=left;i--)
            {
                ans[bottom][i]=count;
                count++;
            }
            bottom--;
            for(int i=bottom;i>=top;i--)
            {
                ans[i][left]=count;count++;
            }
            left++;
        }
       return ans;
    }
}
