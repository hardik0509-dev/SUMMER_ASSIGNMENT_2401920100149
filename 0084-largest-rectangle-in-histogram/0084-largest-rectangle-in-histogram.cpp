class Solution {
public:
    int largestRectangleArea(vector<int>& h) {
        int n=h.size();
      vector<int>right(n,0);
      vector<int>left(n,0);
      stack<int>st;
      for(int i=n-1;i>=0;i--){

      
      while(st.size()>0&&h[st.top()]>=h[i]){
        st.pop();

      }
      right[i]=st.empty()?n:st.top();
      st.push(i);

      }
      while(!st.empty()){
        st.pop();

      }
       for(int i=0;i<n;i++){

      
      while(st.size()>0&&h[st.top()]>=h[i]){
        st.pop();

      }
      left[i]=st.empty()?-1:st.top();
      st.push(i);

      }
      int ans=0;
      for(int i=0;i<n;i++){
        int width=right[i]-left[i]-1;
        int currarea=width*h[i];
        ans=max(ans,currarea);
      }
      return ans;
    }
};