class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int>res;
        deque<int>de;
        for(int i=0;i<nums.size();i++){
            if(!de.empty()&&de.front()<=i-k){
                de.pop_front();

            }
            while(!de.empty()&&nums[de.back()]<=nums[i]){
                de.pop_back();

            }
            de.push_back(i);
            if(i>=k-1){
                res.push_back(nums[de.front()]);
            }
        }
        return res;
        
    }
};