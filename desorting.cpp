#include<bits/stdc++.h>
using namespace std;
void desort(){
int size;
    cin>>size;
    int arr[size];
    int diff=INT_MAX;
    //intialising element
    for(int i=0;i<size;i++)
    cin>>arr[i];
for(int i=0;i<size-1;i++){
    if(arr[i]>arr[i+1])
    {
        cout<<0<<endl;
        return;
    }
    else
{
    diff=min(diff,arr[i+1]-arr[i]);
}
}

   cout<<""<<diff/2+1<<endl;

}
int main(){
   int n;
   cin>>n;
while(n--){
    desort();
}
return 0;
}