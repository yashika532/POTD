int minMoves(int a[], int n, int k)
{
    long count=0;
    int i=0;
   while(i<n-1){
       if(a[i+1]>a[i]){
           int temp=ceil((a[i+1]-a[i])*1.0/k);
           a[i+1]=a[i+1]-temp*k;
           count=count+temp;
       }
       i++;
   }
    return count%1000000007;
}