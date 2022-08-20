#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    ifstream newFile("C:\\Users\\lalit\\OneDrive\\Desktop\\lalit.txt");
    while(getline(newFile,str))
    {
        cout<<str;
    }
    newFile.close();
}