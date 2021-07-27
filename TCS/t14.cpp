// change the letters to the opposite ....
# include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[15];
    int i;
    cin>>str;
    for(i=0;i<strlen(str);i++)
    {
        str[i]=97-str[i]+122;
    }

    cout<<str;

    return 0;
}