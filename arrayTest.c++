#include<iostream>
using namespace std;
int main()
{
   int arr[]={1,2,3,4,5,6,7};
   int size=sizeof(arr)/sizeof(arr[0]);
   for(int i:arr)
   {
      // std::
      cout<<i<<" ";
   }
   return 0;   
}