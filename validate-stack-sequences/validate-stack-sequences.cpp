class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> st;
        int i = 0;
        for(int a :  pushed){
            st.push(a);
            while(!st.empty() && st.top() == popped[i]){
                //  cout<<st.top();
               i++;
                st.pop();
            }
        }
        // while(st.size()>0){
        //     cout<<st.top();
        //     st.pop();
        // }
        if(st.size()==0){
            return true;
        }
      return false;

    }
};