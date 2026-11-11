class Solution {
public:
    int calPoints(vector<string>& operations) {
        int n=operations.size();
        stack<int>record;
        for(int i=0;i<n;i++){
            if(operations[i]!="C"&&operations[i]!="D"&&operations[i]!="+"){
                record.push(stoi(operations[i]));
            }
            else if(operations[i]=="C"){
                 record.pop();
            }
            else if(operations[i]=="D"){
                record.push(record.top()*2);
            }
            else{
               int a=record.top();
               record.pop();
               int b=record.top();
               record.pop();
               int c=a+b;
               record.push(b);
               record.push(a);  
               record.push(c);    
            }
        }
        int sum=0;
        while(!record.empty()){
            sum+=record.top();
            record.pop();
        }
        return sum;

        
    }
};