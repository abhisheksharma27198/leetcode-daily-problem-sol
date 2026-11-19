class Solution {
public:
    string removeStars(string s) {
        int n=s.size();
        stack<char>s1;
        for(int i=0;i<n;i++){
            if(s[i]!='*'){
                s1.push(s[i]);
            }
            else{
                if(s[i]=='*'&&!s1.empty()){
                    s1.pop();
                }
            }
            
        }
        stack<char>s2;
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
        string str="";
        while(!s2.empty()){
            str+=s2.top();
            s2.pop();
        }
        return str;
    }
};