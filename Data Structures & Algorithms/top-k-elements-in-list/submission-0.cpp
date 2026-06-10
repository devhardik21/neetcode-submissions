class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
       vector<int>ans ;
       int size= nums.size() ;
        unordered_map<int,int>map ;
        vector<vector<int>>store(size+1) ; 
        // map me daal diye 
        for(int i= 0 ; i<nums.size() ; i++){
            map[nums[i]]++ ; 
        }
        for(auto it : map){
            store[it.second].push_back(it.first) ; 
        }
        for(int i=store.size()-1 ; i>=0 ; i--){
            while(k>0 && store[i].size()>0){
                ans.push_back(store[i].back()) ;
                store[i].pop_back() ; 
                k-- ;
            }
        }
        return ans ; 

        
    }
};
