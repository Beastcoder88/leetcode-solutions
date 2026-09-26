class Solution {
public:
    int maxScore(string s) {
        int cnt0 = 0;
        int cnt1 = 0;
        int maxi = INT_MIN;
        for(int i = 0; i < s.size(); i++){
            if(s[i]=='1') cnt1++;
        }
        for(int i = 0; i < s.size()-1; i++){
            if(s[i]=='0') cnt0++;
            else cnt1--;
            maxi = max(maxi,cnt0+cnt1);
        }
        return maxi;
    }
};