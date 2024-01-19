class Solution {
public:
    bool canPlaceFlowers(vector<int>& arr, int n) {
        int count=0;
        int arrN=arr.size();
        for(int i=0;i<arrN;i++){
            if(arr[i]==0 && (i==0 || arr[i-1]==0) && (i==arrN-1 || arr[i+1]==0)){
                count++;
                arr[i]=1;
                if(count>=n) break;
            }
        }
        return count>=n ? true: false;
    }
};
