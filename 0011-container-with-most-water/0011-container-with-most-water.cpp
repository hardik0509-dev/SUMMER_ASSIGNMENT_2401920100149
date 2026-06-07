class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int right=n-1;
        int left=0;
        int maxwater=0;
        while(left<right){
            int wt=right-left;
            int mini=min(height[left],height[right]);
            int water=wt*mini;
            maxwater=max(maxwater,water);
            height[left]<height[right]? left++:right--;

        }
        
        return maxwater;
        
    }
};