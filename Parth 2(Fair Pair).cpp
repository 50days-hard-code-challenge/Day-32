class Solution {
public:
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        long long ans=0;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            long long s = lower_bound(nums.begin(),nums.begin()+i,(lower-nums[i])) - nums.begin();
            long long e = upper_bound(nums.begin(),nums.begin()+i,(upper-nums[i])) - nums.begin()-1;
            if(s>=i){
                continue;
            }
            ans+=e-s+1;
        }
        return ans;
    }
};
