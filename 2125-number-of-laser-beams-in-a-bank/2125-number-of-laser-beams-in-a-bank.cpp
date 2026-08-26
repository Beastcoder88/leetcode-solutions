class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int ans = 0;
        int prevCnt = 0;
        for(int i = 0; i < bank.size(); i++){
            int curr_count = 0;
            for(int j = 0; j < bank[i].size(); j++){
                if(bank[i][j] == '1'){
                    curr_count++;
                }
            }
            if(curr_count > 0){
                ans += (prevCnt * curr_count);
                prevCnt = curr_count;
            }
        }
        return ans;
    }
};