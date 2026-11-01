class Solution {
public:
    int findGCD(vector<int>& nums) {
        int s=*min_element(nums.begin(),nums.end());
        int l=*max_element(nums.begin(),nums.end());
        int gcd;
        for(int i=1000;i>0;i--){
            if(s%i==0&&l%i==0){
                gcd=i;
                break;
            }

        }
        return gcd;
        
    }
};