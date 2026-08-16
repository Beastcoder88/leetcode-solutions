class Solution {
public:
    int func(vector<int>& arr,int p){
        int l = 0, r = 0,cnt = 0;
        unordered_map<int,int> mpp;
        while(r<arr.size()){
            mpp[arr[r]]++;
            while(mpp.size()>p){
                mpp[arr[l]]--;
                if(mpp[arr[l]]==0) mpp.erase(arr[l]);
                l++;
            }
            cnt += (r-l+1);
            r++;
        }
        return cnt;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return func(nums,k)-func(nums,k-1);
    }
};