class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int c;
        unordered_map<int,int> count;
        for(int i=0;i<n;i++){
            count[nums[i]]++;
            if(count[nums[i]]>n/2){
                c=nums[i];
                break;
            }
        }
       
        return c;
        
    }
};