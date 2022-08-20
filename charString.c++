#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[]="lalit";
    char str2[]="thakre";
    cout<<str<<endl;
    int n=strlen(str);
    cout<<n<<"\n";
    for(int i=0;i<n;i++)
    {
        cout<<str[i]<<" ";
    }
    cout<<"\n"<<strrev(str);
    cout<<"\n"<<strcat(str,str2);
    cout<<"\n"<<strlwr(str);
    cout<<"\n"<<strupr(str);
    
    // int n=str.len();
    // for(int i=0;i<n;i++)
    // {
    //     cout<<str[i];
    // }
}