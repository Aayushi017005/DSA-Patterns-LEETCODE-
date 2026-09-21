class Solution {
public:
    int beautySum(string s) {
        int m = s.size();
        int ans=0;
        for(int i=0;i<m;i++){
             unordered_map<char,int>mpp;
        for(int j=i;j<m;j++){
       mpp[s[j]]++;
       int mcf = INT_MIN; int lcf = INT_MAX;
       for(auto a:mpp){
        mcf = max(mcf,a.second);
       lcf = min(lcf,a.second);
       }
       ans= ans+ (mcf-lcf);
        }
        }
        return ans;
    }
};