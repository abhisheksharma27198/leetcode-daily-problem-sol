class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        int n;
        for(int i=0;i<nums.size();i++){
           if(nums[i]==original){
            original*=2;
            n=original;
            break;
            
           }
        }
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                if(n==nums[j]){
                    n=n*2;
                }
            }
        }
        return n;
    }
};