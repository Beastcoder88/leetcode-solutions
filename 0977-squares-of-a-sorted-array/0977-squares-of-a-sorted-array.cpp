class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        int r = n-1;
        int i = n-1;
        int l = 0;
        while(l<=r){
            if(abs(nums[l])>abs(nums[r])){
                ans[i] = nums[l]*nums[l];
                l++;
            }
            else{
                ans[i] = nums[r]*nums[r];
                r--;
            }
            i--;
        }
        return ans;
    }
};