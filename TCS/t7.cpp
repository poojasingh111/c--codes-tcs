//SHLOKA PROBLEM
# include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i=1,x=0,y=0,s=10;
    char c;
    cin>>n;
    c='R';


    while(n)
    {   
        switch(c)
        {
                case 'R':
                {
                    x=x+s;
                    s+=10; 
                    c='U';
                    break;
                }
                
                
                case 'U':
                {
                    y=y+s;
                    s+=10; 
                    c='L';
                    break;
                }
                    
                
                case 'L':
                {
                    x=x-s;
                    s+=10; 
                    c='D';
                    break;
                }
                    
                
                case 'D':
                {
                    y=y-s;
                    s+=10; 
                    c='A';
                    break;
                }

                 case 'A':
                {
                    x=x+s;
                    s+=10; 
                    c='R';
                    break;
                }
                    
        }
               n--;
       
        
    }
  
  cout<<x<<y;

  return 0;
}