class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int> arr;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == c){
                arr.push_back(i);
            }
        }
        vector<int> ans;
        for(int i = 0; i < s.size(); i++){
            int mini = INT_MAX;
            for(int j = 0; j < arr.size(); j++){
                mini = min(mini,abs(i-arr[j]));
            }
            ans.push_back(mini);
        }
        return ans;
    }
};