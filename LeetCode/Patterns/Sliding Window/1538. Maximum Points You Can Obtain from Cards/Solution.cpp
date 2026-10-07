class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int Lsum =0 ; int Rsum = 0; int Maxsum =0;

        for(int i =0 ; i<k; i++){
            Lsum = Lsum + cardPoints[i];
            Maxsum = Lsum;
        }
        int rightidx = cardPoints.size()-1;
        for(int i=k-1;i>=0;i--){
            Lsum = Lsum - cardPoints[i];
         Rsum = Rsum + cardPoints[rightidx];
         rightidx--;
         Maxsum = max(Maxsum,Lsum + Rsum);
        }
        return Maxsum;
    }
};