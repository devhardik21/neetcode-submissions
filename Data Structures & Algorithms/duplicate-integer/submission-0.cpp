class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int>us ;
        int size = nums.size();  
        for(int i= 0 ; i<size ; i++){
            if(us.find(nums[i]) == us.end()){
                us.insert(nums[i]) ;
            }
            else{
                return true ; 
            }
        }
        return false ; 
    }
};