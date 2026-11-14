class Solution {
public:
    long long sumAndMultiply(int n) {
        stack<int>s1;
        while(n>0){
            int d=n%10;
            if(d!=0){
                s1.push(d);
            }
            n=n/10;
        }
        long x=0;
        while(!s1.empty()){
           x=x*10+s1.top();
           s1.pop();
        }
        long sum=0;
        long x1=x;
        while(x1>0){
            int d1=x1%10;
            sum+=d1;
            x1/=10;
        }
        return x*sum;
    }
};