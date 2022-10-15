// Input: s = "catsanddog", n = 5 
// dict = {"cats", "cat", "and", "sand", "dog"}
// Output: (cats and dog)(cat sand dog)
// Explanation: All the words in the given 
// sentences are present in the dictionary.
// Example 2:
// Input: s = "catsandog", n = 5
// dict = {"cats", "cat", "and", "sand", "dog"}
// Output: Empty
#include<iostream>
using namespace std;
void check(string str,string s[],int n)
{
    return check(str,s,n);
}
int main()
{
    string str;
    cin>>str;
    int n;
    cout<<"Enter range of list:";
    cin>>n;
    string s[n];
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    check(str,s,n);
    // for(int i=0;i<n;i++)
    // {
    //     string s1=s[i];
    //     for(int j=0;j<n;j++)
    //     {
    //         if(i==j)
    //         {
    //             continue;
    //         }
    //         s1+=s[j];
    //         if(s1==str)
    //         {
    //             for(int k=i;k<=j;k++)
    //             {
    //                 cout<<s[k]<<endl;
    //             }
    //         }
    //     }
    // }
    return 0;
}