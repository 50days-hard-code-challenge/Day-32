class Solution {
    public int kthGrammar(int n, int k) {
        return solve(n,k);
    }
    public int solve (int n, int k){
        // Base Case 
        if(n==1 && k==1){
            return 0;
        }
        int length = (int)Math.pow(2,n-1);
        int mid = length/2;
        
        // Recursive call
        // if target i.e k is present in the left half, then k remains same
        if(k<=mid){
            // previous row ke mid se pahle & present row same hai
            return solve(n-1,k);
        }
        else{
            // copy after mid with complement
            return 1-solve(n-1,k-mid);
        }

    }
}
