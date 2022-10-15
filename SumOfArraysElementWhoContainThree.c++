#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum=0;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
         int t2=arr[i];
        while(arr[i]>0)
        {
            int t=arr[i]%10;
            if(t==3)
            {
                sum=sum+t2;
                arr[i]=0;
            }
            else
            {
                arr[i]=arr[i]/10;
            }
        }
    }
    cout<<sum;
    return 0;
}