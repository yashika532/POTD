class Solution {
public:
    int minCost(string color, vector<int>&time) {
        int i=0,j=0,ans=0;
        while(i<time.size()&&j<time.size()){
           int count=0,maxcount=0;
           while(j<time.size()&&color[i]==color[j]){
           count+=time[j];
           maxcount=max(maxcount,time[j]);
           j++;
           }
           ans+=count-maxcount;
           i=j;
        }
        return ans;
    }
};