# include<bits/stdc++.h>
using namespace std;
int main()
{
    int y;
    cin>>y;
    if(y%4==0)
    {
        if(y%100==0)
        {
            if(y%400==0)
            {
                cout<<"leap yr";
            }
            else
            {
                cout<<"not a leap year";
            }
        }
        else{
            cout<<"leap year";
        }
    }
    else{
        cout<<"not a leap year";
    }

    return 0;
}
