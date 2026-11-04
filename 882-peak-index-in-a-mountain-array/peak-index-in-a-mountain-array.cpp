class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n=arr.size();
        int c;
        for(int i=0;i<n;i++){
            if(arr[i]<arr[i+1]&&arr[i+1]>arr[i+2]){
                c=i+1;
                break;
            }  
        }
        return c;
        
    }
};