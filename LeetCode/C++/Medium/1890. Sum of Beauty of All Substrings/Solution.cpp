
class Solution {
public:
    int beautySum(string s) {

        int n = s.size();
        int ans = 0;

        for(int i = 0; i < n; i++) {

            int freq[26] = {0};

            for(int j = i; j < n; j++) {

                freq[s[j] - 'a']++;

                int maxFreq = 0;
                int minFreq = INT_MAX;

                // Check only 26 characters
                for(int k = 0; k < 26; k++) {

                    if(freq[k] > 0) {
                        maxFreq = max(maxFreq, freq[k]);
                        minFreq = min(minFreq, freq[k]);
                    }
                }

                ans += maxFreq - minFreq;
            }
        }

        return ans;
    }
};










/*BRUTE FORCE APPROACH -
in this question , we have to find all the possible substr and in each str we calculate the beauty of that substr(most freq- least freq) and the summation of all substring return beauty .
-find the subsrtings
- calculate the mcf and lcf and then beauty.
- add beauty to the ans 
- return the ans
- everytime a new map created for every i position.
time - O(n sq.) and last third loop- it runs for max o(26) - only lowercaseletters.
space- o(1)
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
};*/