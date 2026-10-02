class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int m=0,m1=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                m1++;
                m=max(m1,m);
            }
            else{
                m1=0;
            }
        }
        return m;
        
    }
};