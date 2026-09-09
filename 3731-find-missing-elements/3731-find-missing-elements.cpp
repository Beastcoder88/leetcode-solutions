class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> ans;
        int mx = nums[0];
        int mn = nums[0];
        for(int it : nums){
            mx = max(mx,it);
            mn = min(mn,it);
        }

        for(int i = mn; i <= mx; i++){
            bool found = false;

            for(int it : nums){
                if(it == i){
                    found = true;
                    break;
                }
            }
            if(!found){
                ans.push_back(i);
            }
        }
        return ans;
    }
};