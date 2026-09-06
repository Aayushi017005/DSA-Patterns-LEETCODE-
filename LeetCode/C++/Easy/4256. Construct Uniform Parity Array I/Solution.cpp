class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int minEl= *min_element(nums1.begin(),nums1.end());

        if(minEl%2!=0){
            return true;     // checking odd- then we can convert all even to odd
        }
            
        return true;

    }
};