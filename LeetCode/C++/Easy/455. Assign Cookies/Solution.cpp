class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
         int l=0 ; //left ptr points to greed factor 
         int r=0;  // pts to children 
         
          sort(g.begin(),g.end());
          sort(s.begin(),s.end());
         while (l<s.size() && r<g.size()){
          if(g[r]<=s[l]){
            r=r+1;
            l=l+1;
          }
          else{
            l=l+1;
          }
          
         }
              return r;
    }
};