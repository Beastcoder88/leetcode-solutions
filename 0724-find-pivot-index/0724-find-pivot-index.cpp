class Solution {
public:
    int leftsum(vector<int> arr,int index){
        int lsum = 0;
        for(int i = 0; i < index; i++){
            lsum += arr[i];
        }
        return lsum;
    }
    int rightsum(vector<int> arr,int index){
        int rsum = 0;
        int n = arr.size();
        for(int i = n-1; i > index; i--){
            rsum += arr[i];
        }
        return rsum;
    }

    int pivotIndex(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++){
            if(leftsum(nums,i)==rightsum(nums,i)){
                return i;
            }
        }
        return -1;
    }
};