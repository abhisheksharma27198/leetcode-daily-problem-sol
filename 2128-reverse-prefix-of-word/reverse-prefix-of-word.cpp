class Solution {
public:
    string reversePrefix(string word, char ch) {
        int n=word.size();
        stack<char>s1;
        string s2;
        bool found=false;
        for(int i=0;i<n;i++){
           if(word[i]!=ch||found){
            s1.push(word[i]);
            }
           else{
            found=true;
              s2+=ch;
              while(!s1.empty()){
                s2+=s1.top();
                s1.pop();
              }
            }
           
        }
        stack<char>s3;
        while(!s1.empty()){
            s3.push(s1.top());
            s1.pop();
        }
        while(!s3.empty()){
             s2+=s3.top();
             s3.pop();
        }
        return s2;
    }
};