#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;        
        string s;
        cin>>s;
string ans;
int j=0;
for(int i=0;i<s.length();i++){
    if(s[i]<k){
          ans[j]=s[i];
          j++;
    }
    else
    ans[j]=s[i];
    j++;
}
//printing ans
for(int i=0;i<ans.length();i++)
cout<<ans[i];

    }
    
    return 0;
}