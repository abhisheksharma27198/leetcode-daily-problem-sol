class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sum_even=0,sum_odd=0;
        int c;
        for(int i=1;i<=2*n;i++){
            if(i%2==0){
                sum_even+=i;
            }
            else{
                sum_odd+=i;
            }
        }
        for(int i=n;i>0;i++){
            if(n%i==0){
                c=n;
                break;
            }
        }
        return c;
        
    }
};