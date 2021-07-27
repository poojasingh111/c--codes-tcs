# include<bits/stdc++.h>
using namespace std;
void prime(int n);
void fibbo(int n);
int main()
{  int n,i;
      cin>>n;
    
      if(i%2==0)
      {
         prime(n/2);
      }  
      else
      {
         fibbo(n/2+1);
      }
    
  return 0;
}

void prime(int n)
{
   int i,j,x=0,count=0;
   for(i=1;i<=100;i++)
   {
     x=0;
            for(j=2;j<=i/2;j++)
            {
              if(i%j==0)
              x=0;
              else
              x=1;
            }
        if(x==1)
        count++;
        if(count==n)
        {
          cout<<i;
          break;
        }
   }
}


void fibbo(int n)
{  int n1=1,n2=1,n3,i;
  for(i=3;i<=n;i++)
  {
    n3=n1+n2;
    n1=n2;
    n2=n3;
  }
  cout<<n3;

}