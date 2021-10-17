class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length()==0||s.length()==1)return s.length();
        unordered_map<char,int> m;
        int i =0 , j=0 , count =0 ;
        while(j<s.size() && i<s.size()){
            if(m.find(s[j])!=m.end()){
                i =max(i , m[s[j]]+1);
            }
            
            m[s[j]]=j;
            count = max(count , j-i+1);
            j++;
            
        }
        return count;
    }
};
