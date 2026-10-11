class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // two ptr and sliding window approach 
        int l =0 ;int r=0; int len =0; int maxlen=0;
       unordered_map<char,int>hash;
         while(r< s.size()){
         if (hash.find(s[r]) != hash.end()){
            if(hash[s[r]]>=l){
         l = hash[s[r]] +1;
            }
         }
            len = r-l+1;
            maxlen = max(len,maxlen);
            hash[s[r]] =r; 
            r++;
         }
           return maxlen;
    }
};

/*class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int ans = 0;

        for(int i = 0; i < n; i++) {
            int freq[256] = {0};

            for(int j = i; j < n; j++) {

                if(freq[s[j]] == 1) {
                    break;
                }

                freq[s[j]] = 1;

                ans = max(ans, j - i + 1);
            }
        }

        return ans;
    }
};*/