class Solution {
public:
    int findGCD(vector<int>& nums) {
        int m=*max_element(nums.begin(),nums.end());
        int n=*min_element(nums.begin(),nums.end());
        int m1=1;
        for(int i=1;i<m;i++){
            if(m%i==0&&n%i==0){
               m1=max(m1,i);
            }
        }
        if(m==n){
            return m;
        }
        else{
            return m1;
        }
        
    }
};