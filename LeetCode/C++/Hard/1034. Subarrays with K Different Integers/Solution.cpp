
class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return AtMost(nums, k) - AtMost(nums, k - 1);
    }

    int AtMost(vector<int>& nums, int k) {
        int l = 0, r = 0, cnt = 0;
        unordered_map<int, int> mp;

        while (r < nums.size()) {
            mp[nums[r]]++;

            if (mp.size() > k) {
                mp[nums[l]]--;

                if (mp[nums[l]] == 0)
                    mp.erase(nums[l]);

                l++;
            }

            cnt += (r - l + 1);
            r++;
        }

        return cnt;
    }
};

/*class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
       int n = nums.size() ;
       int cnt =0;

       for(int i =0; i<nums.size();i++){
          unordered_set<int>st;
          for(int j =i ;j<n; j++){
            st.insert(nums[j]);
            if( st.size()==k) cnt++;
            else if( st.size()> k) break;
          }
       }
       return cnt;
    }
}; 
time complexity - big o (n sq.)
space complexity - big o (n) because at the worst possible scenerio if all the numbers are uniqe it might takes n space.*/