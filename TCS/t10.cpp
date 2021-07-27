# include<bits/stdc++.h>
using namespace std;
int main()
{  int n,i,s=0,r=0;
      cin>>n;
    for(i=1;i<=n;i++)
    {
      if(i%2==0)
      {
          cout<<pow(3,r)<<" ";
          r++;
      }  
      else{
          cout<<pow(2,s)<<" ";
          s++;
      }
    }
  return 0;
}