class Solution {
public:
    string removeOuterParentheses(string s) {
        vector<char>st;
    string ans;
    for(auto a:s)
    {
        if(a=='(')
        {
            if(st.size()>0)
            {
                ans+='(';
            }
            st.push_back('(');
        }
        else
        {
            if(st.size()>1)
            {
                ans+=')';
            }
            st.pop_back();
        }
    }
    return ans;   
    }
};