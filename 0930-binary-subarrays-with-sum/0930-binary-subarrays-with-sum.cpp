class Solution {
public:
    int func(vector<int> arr,int k){
        if(k<0) return 0;
        int l = 0, r = 0 , cnt = 0,sum = 0;
        while(r<arr.size()){
            sum += arr[r];
            while(sum>k){
                sum = sum-arr[l];
                l++;
            }
            cnt += (r-l+1);
            r++;
        }
        return cnt;
    }

    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return func(nums,goal)-func(nums,goal-1);
    }
};