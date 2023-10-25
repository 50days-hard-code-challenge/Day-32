class Solution {
public:
    void nextPermutation(vector<int>& nums) {
       /*int p=nums.size()-1;
       int flag=0;
       while(p>0){
          if(nums[p-1]<nums[p]){
             swap(nums[p-1],nums[p]);
              flag=1;
              if(p==nums.size()-1){
                  break;
              }
          }
          if(flag==1 && p<nums.size()-1){
              
              sort(nums.begin()+p,nums.end());
              int t=p;
              int flags=0;
              p=nums.size()-1;
              while(p>t){
                  if(nums[p]>nums[p-1]){
                      swap(nums[p],nums[p-1]);
                      flags=1;
                  }
                  p--;
              }
              int sw=0;
              if(nums[t]<nums[t-1] && flags==1){
                  swap(nums[t],nums[t-1]);
                  sw=1;
              }
              if(sw==1){
                  sort(nums.begin()+t,nums.end());
              }
              break;
          }
          
          p--;
          
       }*/
       /*int p=nums.size()-2;
       while(nums[p+1]<=nums[p] && p>=0){
           p--;
       }
       if(p>=0){
           int j=nums.size()-1;
           while(nums[j]<=nums[p]){
               j--;
           }
           swap(nums[p],nums[j]);
       }
       reverse(nums.begin()+p+1,nums.end());*/
       


        int n = nums.size(), index = -1;
        for(int i=n-2; i>=0; i--){
            if(nums[i] < nums[i+1]){
                index = i;
                break;
            }
        }
        for(int i=n-1; i>=index && index != -1; i--){
            if(nums[i] > nums[index]){
                swap(nums[i], nums[index]);
                break;
            }
        }
        reverse(nums.begin() + index + 1, nums.end());
    }
};

