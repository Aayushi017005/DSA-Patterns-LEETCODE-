class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int l = 0;
        int r = 0;
        int maxlen = 0;

        unordered_map<int, int> tf;

        while (r < fruits.size()) {
            tf[fruits[r]]++;

            if (tf.size() > 2) {
                tf[fruits[l]]--;

                if (tf[fruits[l]] == 0) {
                    tf.erase(fruits[l]);
                }
                l++;
            }
            else {
                maxlen = max(maxlen, r - l + 1);
            }

            r++;
        }

        return maxlen;
    }
};
/*
class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int maxlen=0 ; int len = 0;
        for(int i=0;i<fruits.size();i++){
          unordered_set<int>tf;
          for(int j=i; j<fruits.size();j++){
            tf.insert(fruits[j]);
           if(tf.size()<=2){
                maxlen = max(maxlen,j-i+1);
            }
            else break;
          }
        }
        return maxlen;
    }
}; // time = o 0f nsq. 
//spac = o of 3.*/