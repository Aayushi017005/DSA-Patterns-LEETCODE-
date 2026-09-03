class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int minEl= *min_element(nums1.begin(),nums1.end());

        if(minEl%2==1){
            return true;     // checking odd- then we can convert all even to odd
        }
        // check if we can make all even elements in nums2
        for(int i =0;i<nums1.size();i++){
            if(nums1[i] %2==1)
            return false;
        }
         
        return true;

    }
};