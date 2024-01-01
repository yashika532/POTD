class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
int first=INT_MIN,sec=INT_MIN;
for(int i=0;i<n;i++){
    if(arr[i]>first){
        sec=first;
        first=arr[i];
    }
    else if(arr[i]>sec && arr[i]<first)
    sec=arr[i];
}
if(sec==INT_MIN){
    sec=-1;
}
return sec;
	}
};