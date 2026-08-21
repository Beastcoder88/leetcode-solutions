class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string st = "";
        string ts = "";
        for(char ch : s){
            if(ch == '#'){
                if(!st.empty()){
                    st.pop_back();
                }
            }
            else{
                st.push_back(ch);
            }
        }
        for(char ch : t){
            if(ch == '#'){
                if(!ts.empty()){
                    ts.pop_back();
                }
            }
            else{
                ts.push_back(ch);
            }
        }
        return st == ts;
    }
};