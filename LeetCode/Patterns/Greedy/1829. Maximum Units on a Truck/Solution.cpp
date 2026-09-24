class Solution {
public:
     
   static bool comparator(vector<int>& a, vector<int>& b) {
    return a[1] > b[1];
}
        
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
      
        sort(boxTypes.begin(),boxTypes.end(),comparator);
        int totalVal=0;

        for(int i=0;i<boxTypes.size();i++){

    if(boxTypes[i][0]<=truckSize){
        totalVal+=boxTypes[i][0]* boxTypes[i][1];
        truckSize-=boxTypes[i][0];
    }
    else{
        totalVal+= boxTypes[i][1] * truckSize;
        break;
    }
        }
        return totalVal;
    }
};