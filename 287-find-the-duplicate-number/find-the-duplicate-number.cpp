class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        long c;
        vector<int> v1(n+1,0);
        for(int i=0;i<n;i++){
           //v1[nums[i]]++;
           long d=nums[i];
           v1[d]++;
        }
        for(int i=1;i<=n;i++){
            if(v1[i]>=2){
               c=i;
               break;
            }
        }
        return c;
        
    }
};