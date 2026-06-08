class Solution {
public:
    string generate(string &word){
        int arr[26] = {0} ; 
        // traversing and marking the chars in the array 
        for(char &ch : word){
            arr[ch-'a'] ++ ; 
        }
        string new_word = "" ; 
        for(int i=0; i<26 ; i++){

            int freq = arr[i] ; 
            if(freq>0){
            new_word+=string(freq,'a'+i) ;
        }
        }
        return new_word; 

    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string> > mpp ; 
        vector<vector<string>> ans ; 
        for(int i=0 ; i<strs.size() ; i++){
            string temp = strs[i] ; 
            string sorted_str = generate(temp);
            mpp[sorted_str].push_back(temp) ;
        }
        for(auto it : mpp){
            ans.push_back(it.second) ; 
        }
        return ans ; 

    }
};
