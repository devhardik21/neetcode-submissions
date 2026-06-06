class Solution {
public:
    bool isAnagram(string s, string t) {
       if(s.size()!=t.size()) return false ; 
       unordered_map<char ,int>s_mpp ;  
       unordered_map<char ,int>t_mpp ;  
       for(int i = 0 ; i<s.size() ; i++){
            s_mpp[s[i]] ++ ;
            t_mpp[t[i]] ++ ;
       }
       
       for(int i = 0 ; i<s.size() ; i++){
            if(s_mpp[s[i]]!=t_mpp[s[i]]){
                return false ; 
            }
       }

       return true ;

    }
};
