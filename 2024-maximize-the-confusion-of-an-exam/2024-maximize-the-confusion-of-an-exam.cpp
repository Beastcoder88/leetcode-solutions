class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        int n = answerKey.size();
        int left = 0, cnt = 0;
        int ans = 0;
        for(int right = 0; right < n; right++){
            if(answerKey[right] == 'T'){
                cnt++;
            }
            while(cnt>k){
                if(answerKey[left] == 'T'){
                    cnt--;
                }
                left++;
            }
            ans = max(ans,right-left+1);
        }
        left = 0,cnt = 0;
        for(int right = 0; right < n; right++){
            if(answerKey[right] == 'F'){
                cnt++;
            }
            while(cnt>k){
                if(answerKey[left] == 'F'){
                    cnt--;
                }
                left++;
            }
            ans = max(ans,right-left+1);
        }
        return ans;
    }
};