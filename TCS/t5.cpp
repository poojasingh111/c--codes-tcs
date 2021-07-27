# include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch[16][10]={"break","case","continue","default","defer","else",
    "for","func","goto","if","map","range","return","struct","type","var"};
    char str[20];
    int s=0;
    cin>>str;
    for(int i=0;i<16;i++)
    {
        if(strcmp(str,ch[i])==0)
        {
             cout<<str<<" is a keyword";
             s=1;
             break;
        }
    }
    
    if(s==0)
    {
      cout<<str<<" is not a keyword";
    }

    return 0;

}
