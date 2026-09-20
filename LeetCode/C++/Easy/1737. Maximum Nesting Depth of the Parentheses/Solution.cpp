class Solution {
public:
    int maxDepth(string s) {
        int Maxcount = 0;
   int ans=0;
    for(int i =0;i<s.size();i++){
        if(s[i]=='('){
         Maxcount++;
        ans = max(ans,Maxcount);
        }
    if(s[i]==')'){
        Maxcount--;
    }
    }
    return  ans;
    }
    
}; // this is optimal approach T(N)= O(N) and S(N)=O(1);
// Another aproach is using stack always remember when there is a ques of valid parethesis then must be always think of stack for storing and poping parenthesis.
// so the T(N) = o(n) and S(N)= o(n/2) { because of pushing '(' brakets are at most 1/2 length in worst case possibility} like-"((((()))))"