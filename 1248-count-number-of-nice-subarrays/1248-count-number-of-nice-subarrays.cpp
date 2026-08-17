class Solution {
public:
    int func(vector<int>& arr,int p){
        int l = 0, r = 0,sum = 0,cnt = 0;
        while(r<arr.size()){
            sum += (arr[r]%2);
            while(sum > p){
                sum -= (arr[l]%2);
                l++;
            }
            cnt += (r-l+1);
            r++;
        }
        return cnt;
    }

    int numberOfSubarrays(vector<int>& nums, int k) {
        return func(nums,k)-func(nums,k-1);
    }
};