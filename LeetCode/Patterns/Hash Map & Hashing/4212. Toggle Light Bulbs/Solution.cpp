
 class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        // Step 1: Create an array for 100 bulbs, all OFF initially
        bool bulbsState[101] = {false}; // bulbs 1 to 100

        // Step 2: Go through the given array and toggle each bulb
        for(int i = 0; i < bulbs.size(); i++) {
            int b = bulbs[i];
            if(bulbsState[b] == false) {
                bulbsState[b] = true;   // switch ON if it was OFF
            } else {
                bulbsState[b] = false;  // switch OFF if it was ON
            }
        }

        // Step 3: Collect all bulbs that are ON
        vector<int> result;
        for(int i = 1; i <= 100; i++) {
            if(bulbsState[i] == true) {
                result.push_back(i);
            }
        }

        return result; // already sorted
    }
};
