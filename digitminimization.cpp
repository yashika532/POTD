#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
while(n--){
    int num;
    cin>>num;
    string s=to_string(num);
    if(s.size()==2){
        cout<<s[1]<<endl;
    }
    else{
    sort(s.begin(),s.end());
    cout<<" "<<s[0]<<endl;
    }
}
return 0;
}