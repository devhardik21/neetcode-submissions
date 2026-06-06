class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mpp ;
        vector<int>ans; 
        
        for(int i = 0 ; i<nums.size() ; i++){
            int req = target - nums[i] ; 
            if(mpp.find(req)!=mpp.end() && i!=mpp[req]){
                ans.push_back(mpp[req]) ; 
                ans.push_back(i) ;
                return ans ; 
            }
            mpp[nums[i]] = i; 
        }
        return ans ; 
    }
};
