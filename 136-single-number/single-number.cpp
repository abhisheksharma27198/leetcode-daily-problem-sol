class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int tar=0;
        for(int i=0;i<nums.size();i++){
            tar=tar^nums[i];
        }
        return tar;
    }    
    
};