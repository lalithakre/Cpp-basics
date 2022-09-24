#include<bits/stdc++.h>
using namespace std;
int main()
{
    int age;
    cin>>age;
    if(age>=18)
    goto vote;//jumping 
    else
    goto notVote;
    vote:
    cout<<"Eligible for vote:";
    return 0;
    notVote:
    cout<<"Not eligible for vote";
    return 0;
}