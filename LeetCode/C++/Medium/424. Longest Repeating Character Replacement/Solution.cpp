class Solution {
public:
    int characterReplacement(string s, int k) {
        int maxlen =0 ; int maxfreq=0; int l =0;int r=0;
        unordered_map<char,int>mpp;
        while(r<s.size()){
          mpp[s[r]]++;
          maxfreq = max(maxfreq,mpp[s[r]]);
          int changes = (r-l+1) - maxfreq;
            if(changes>k){
                mpp[s[l]]--; 
                l=l+1;
            }
            if(changes <= k){
                maxlen = max(maxlen,r-l+1); 
            }
            r++;
        }
        return maxlen;
    }
};
/*
class Solution {
public:
    int characterReplacement(string s, int k) {
         int maxlen=0;
     for(int i=0; i<s.size();i++){
        unordered_map<char,int>hash;
        int maxfreq=0;

        for(int j =i ;j<s.size();j++){
            hash[s[j]]++;
            maxfreq = max(maxfreq,hash[s[j]]);
            // changes means how many char req to change with in a substr.
            int changes =( j-i+1) - maxfreq; 

            if ( changes<=k){
                maxlen = max(maxlen,j-i+1);
            }
            else break;
        }
     }
     return maxlen;
    }
};*/