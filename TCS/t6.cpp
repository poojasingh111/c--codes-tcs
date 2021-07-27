//GREATEST NUMBER
# include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[10],i,max;
    cout<<"enter n : ";
    cin>>n;
    cout<<"enter array: ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    max=a[0];

    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        max=a[i];

    }
    cout<<max;

    return 0;

}