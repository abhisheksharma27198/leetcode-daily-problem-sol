class Solution {
public:
    int smallestEqual(vector<int>& nums) {
        int n=nums.size();
        int c;
        bool found=false;
        for(int i=0;i<n;i++){
            if(nums[i]==i%10){
                c=i;
                found=true;
                break;
            }
            
        }
        if(found){
            return c;
        }
        else{
            return -1;
        }
        
    }
};