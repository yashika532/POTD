#include<iostream>
#include<string>
using namespace std;
int different(string s,string c){
    int i=0,count=0;
    while(i<s.size()){
        if(s[i]!=c[i])
        count++;
    }
    return count;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        cout<<different(s,"codeforces")<<endl;
    }
    return 0;
}