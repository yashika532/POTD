class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int i,j,count=0;
        for(i=0;i<nums.size();i++){
            for(j=0;j<nums.size();j++){
                if((i<j)&&( nums[i]==nums[j])){
                    count+=1; 
                }
            }
        }
        return count;
    }
};