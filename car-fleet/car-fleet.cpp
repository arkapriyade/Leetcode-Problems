class Solution {
public:
    class Cars{
        public:
          int pos;
          float timetotarget;
          Cars(int p,float t){
            pos= p;
            timetotarget=t;
          }
    };
    bool static customsort(Cars &a,Cars &b){
        return a.pos<b.pos;
    }
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n=position.size();
        vector<Cars>v;
        for(int i=0;i<n;i++){
           Cars car(position[i],(target-position[i])/(float)speed[i]);
           v.push_back(car);
        }
        sort(v.begin(),v.end(),customsort);
        int ans=0;
        //  for(int i=0;i<n;i++){
        //      cout<<v[i].pos<<v[i].timetotarget<<" ";
        //  }
        for(int i=n-1;i>=1;i--){
            if(v[i].timetotarget>=v[i-1].timetotarget){
                v[i-1]=v[i];
            }
            else{
                ans++;
            }
        }

        
        return ans+1;
    }
    
};