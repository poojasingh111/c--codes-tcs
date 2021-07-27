// JAR FULL OF CANDIES.....
# include<bits/stdc++.h>
using namespace std;
int candy (int n,int N);
int main()
{
    int n,N=10,k;
    cin>>n;
    if(n>5||n<=0)
    cout<<"INVALID INPUT\n NUMBER OF CANDIES LEFT : "<<N;
    else
    candy(n,N);

    return 0;
}

int candy(int n,int N)
{    
    cout<<"NUMBER OF CANDIES SOLD : "<<n;
    
    cout<<"\nNUMBER OF CANDIES AVAILABLE : "<<N-n;
    
    
    return 0;
}