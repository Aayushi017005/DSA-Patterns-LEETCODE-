class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int>st; 
        int MaxArea=0;
        int nse;
        int element;
        int pse;
        for(int i=0;i<heights.size();i++){
        while(!st.empty() && heights[st.top()]> heights[i]){
             element= st.top ();
            st.pop();
            nse=i;
            if(!st.empty()) pse=st.top();
            else pse=-1;
            MaxArea= max(heights[element]*(nse-pse-1),MaxArea);
        }

           st.push(i);
        }
           while(!st.empty()){
            nse=heights.size();
            element=st.top();
            st.pop();
            if(!st.empty()){
                pse=st.top();
            }
            else{
                pse=-1;
            }
            MaxArea=max(heights[element]*(nse-pse-1),MaxArea);
           }
           return MaxArea;
    }
    
};