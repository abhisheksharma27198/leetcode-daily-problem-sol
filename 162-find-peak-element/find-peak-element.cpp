class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        int found;
        for(int i=0;i<n-1;i++){
            if(nums[i]>nums[i+1]){
                found=i;
                break;
            }
        }
        return found;
        
    }
};