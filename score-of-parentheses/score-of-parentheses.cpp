class Solution {
public:
    int scoreOfParentheses(string s) {
       int ans=0;
       int c=0;
       stack<string>st;
       for (int i=0;i<s.size();i++){
         if(s[i]=='('){
             st.push("(");
         }
         else{
             if(st.top()=="("){
                 st.pop();
                 st.push("1");
             }
             else{
               
                 while(st.top()!="("){
                     ans+=stoi(st.top());
                     st.pop();
                 }
                 st.pop();
                 st.push(to_string(2*ans));
                 ans=0;
               
            }
         }
       }
       while(st.size()>0){
           c+=stoi(st.top());
           st.pop();
       }

       return c;
    }
};