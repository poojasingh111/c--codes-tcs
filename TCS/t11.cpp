# include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[10],b[10],c[10],i;
    cin>>a;
    cin>>b;
    cin>>c;
   for(i=0;i<strlen(a);i++)
   {   if(isdigit(a[i]))
        continue;
      else if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
       {
           a[i]='*';
       }

   }
    for(i=0;i<strlen(b);i++)
   {   if(isdigit(b[i]))
        continue;

       else if(b[i]!='a'&&b[i]!='e'&&b[i]!='i'&&b[i]!='o'&&b[i]!='u')
       {
           b[i]='@';
       }

   }
   cout<<a<<b;
    for(i=0;i<strlen(c);i++)
   {   if(isdigit(c[i]))
        cout<<c[i];
      else
      putchar(toupper(c[i])); 

   } 

   return 0;

}