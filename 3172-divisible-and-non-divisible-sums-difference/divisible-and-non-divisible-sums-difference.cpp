class Solution {
public:
    int differenceOfSums(int n, int m) {
        vector<int>v1;
        vector<int>v2;
        for(int i=1;i<=n;i++){
            if(i%m!=0){
                v1.push_back(i);
            }
            else{
                v2.push_back(i);
            }
        }
        int sum1=0;
        for(int i=0;i<v1.size();i++){
             sum1+=v1[i];
        }
        int sum2=0;
        for(int i=0;i<v2.size();i++){
             sum2+=v2[i];
        }
        return sum1-sum2;

        
    }
};