class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        string ans="";
        int i=1,j=0,k=0;
        char ch=strs[0][k];
        while(k<strs[0].length()){
            ch=strs[0][k];
            i=1;
            while(i<strs.size()){
                if(ch==strs[i][j])
                i++;
                else
                break;
            }
            if(i==strs.size()){
                ans.push_back(ch);
                k++;
            }
            else
            break;        
           j++;
        }
        return ans;
    }
};