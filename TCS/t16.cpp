# include<bits/stdc++.h>
using namespace std;

int main()  
{
	int t[3][3];
	int a[3] = {0};
	int i, j, max=0;
	for(i=0; i<3; i++)
	{
        	for(j=0; j<3; j++)
             { cin>>t[i][j];
                	if(t[i][j]<1 || t[i][j]>100)
                	{
                    	t[i][j] = 0;
            	}
        	}
	}
	for(i=0; i<3; i++)
	{
        	for(j=0; j<3; j++)
        	{
                	a[i] = a[i] + t[j][i];
        	}
        	a[i] = a[i] / 3;
	}
	for(i=0; i<3; i++) { if(a[i]>max)
        	{
                	max = a[i];
        	}
	}
	for(i=0; i<3; i++)
	{
        	if(a[i]==max)
        	{
                	cout<<"Trainee Number : "<<i+1<<"\n";
        	}
        	if(a[i]<70)
        	{
                	cout<<"Trainee is Unfit";
        	}
	}
	return 0;
} 