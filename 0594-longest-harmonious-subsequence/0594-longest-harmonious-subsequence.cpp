class Solution {
public:
    int findLHS(vector<int>& nums) {
        int maxlen = 0;
        unordered_map<int,int> mpp;
        for(auto it : nums){
            mpp[it]++;
        }
        for(auto& it : mpp){
            int x = it.first;
            if(mpp.count(x+1)){
                maxlen = max(maxlen,mpp[x]+mpp[x+1]);
            }
        }
        return maxlen;
    }
};