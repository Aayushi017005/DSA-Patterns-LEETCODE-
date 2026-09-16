class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char>mpp1; //mapping s->t
        unordered_map<char,char>mpp2; //mapping t->s
        int n = s.length()-1;

        for (int i=0;i<=n;i++){
            char ch1= s[i]; 
            char ch2 = t[i];

         if (mpp1.count(ch1)==1 && mpp1[ch1]!=ch2 || mpp2.count(ch2)==1 && mpp2[ch2]!=ch1){
            return false;
         }

            mpp1[ch1] = ch2;
            mpp2[ch2] = ch1;
        }
        return true;
    }
};