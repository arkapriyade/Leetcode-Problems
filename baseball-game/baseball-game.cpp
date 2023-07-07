class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>st;
        for(int i=0;i<operations.size();i++){
            if(operations[i]=="C"){
                st.pop();
                // cout<<"c"<<" ";
            }
            else if(operations[i]=="D")
            {
                //  cout<<st.top()<<"*"<<st.top()*2<<"d"<<" ";
                st.push(st.top()*2);

                
            }
             else if(operations[i]=="+")
            {
                int c=st.top();
                // cout<<c;
                st.pop();
                int c2=st.top();
                // cout<<c2;
                st.pop();
                st.push(c2);
                st.push(c);
                st.push(c+c2);
                // cout<<c+c2;
            
            }
            else{
             st.push(stoi(operations[i]));
             cout<<operations[i];
            }
            }
         int ans=0;
         while(!st.empty()){
            //  cout<<st.top()<<" ";
             ans+=st.top();
             st.pop();
         }
         return ans;
        }
    
};