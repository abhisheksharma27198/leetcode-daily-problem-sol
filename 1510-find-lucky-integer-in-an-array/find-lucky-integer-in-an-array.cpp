class Solution {
public:
    int findLucky(vector<int>& arr) {
        vector<int> freq(10000,0);
        int count=0;
        for(int i=0;i<arr.size();i++){
            freq[arr[i]]++;
        }
        int lucky=-1;
        for(int i=1;i<=arr.size();i++){
             if(freq[i]==i){
                lucky=max(lucky,freq[i]);
            }
        }
        return lucky;
    }
};