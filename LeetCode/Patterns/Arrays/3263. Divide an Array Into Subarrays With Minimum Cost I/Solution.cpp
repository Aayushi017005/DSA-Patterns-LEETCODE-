class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int cost = nums[0];
        int firstmin= INT_MAX;
        int secondmin= INT_MAX;

        for(int i=1;i<nums.size();i++){
                int current=nums[i];
                if(current<firstmin){
                secondmin=firstmin;
                firstmin=current;
            } else if (current<secondmin){
                secondmin=current;
            }
        }
        cost+=firstmin;
        cost+=secondmin;
        return cost;
    }
};