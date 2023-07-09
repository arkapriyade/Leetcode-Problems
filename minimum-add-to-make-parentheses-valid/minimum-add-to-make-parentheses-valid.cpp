class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<string>st;
       int ans = 0;
        vector<char> v;
        for(auto &i: s){
            if(i=='('){
                v.push_back(i);
            }else{
                if(v.empty())ans++;
                else{
                    v.pop_back();
                }
            }
        }
        return ans+v.size();
    }
};