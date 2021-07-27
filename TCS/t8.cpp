//PRIME NUMBER

# include<bits/stdc++.h>
using namespace std;
void check(int n);
int prime(int n);
int main()
{
    int n;
    cin>>n;
    check(n);

    return 0;
}

void check(int n)
{
    if(n<0)
    {
        cout<<"invalid output !!!";
    }
    else
    {
      prime(n);  
    }
 
}

int prime(int n)
{  int i=2,c=0;
for(i=2;i<n;i++)
{
    if(n%i==0){
          c++;
          break;
    }
}
if(c==0)
{
    cout<<"prime";
}   
else
cout<<"not prime";


return 0;

}