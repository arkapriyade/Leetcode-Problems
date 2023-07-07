class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<pair<int,int>>s;
     
        int n=temperatures.size();
           vector<int>v(n);
            vector<int>v1(n);
        for(int i=n-1;i>=0;i--){
            if(s.empty()){
             v[i]=0;
            }
            else if(!s.empty() && s.top().first<=temperatures[i]){
            while(!s.empty() && s.top().first<=temperatures[i]){
                s.pop();
            }
            if(s.empty()){
                v[i]=0;
            }
            else{
                v[i]=s.top().second;
            }
            }
             else if(s.top().first>temperatures[i]){
                 v[i]=s.top().second;
             }

            s.push({temperatures[i],i});
        }
     
       for(int i=0;i<v.size();i++){
           if(v[i]-i<0){
               v1[i]=0;
           }
           else{
           v1[i]=v[i]-i;
           }
       }

        return v1;
    }
};