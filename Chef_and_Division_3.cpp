#include <bits/stdc++.h>
using namespace std;
long long int sum(int a[],int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
    }
    return sum;
}
int main() 
{
int t,n;
cin>>t;
while(t--)
{
    long long int k,d;
    cin>>n>>k>>d;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    long long int m=sum(arr,n);
    long long int ans=m/k;
    cout<<min(ans,d)<<endl;
}
    // your code goes here
	return 0;
}
