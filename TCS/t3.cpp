//THE ODDLY EVEN
# include<bits/stdc++.h>
using namespace std;
 int oddeve(int n,int count);
int main()
 {
   int n,r,count=0,num;
   cin>>n;
   num=n;
   while(n>0){
       r=n%10;
       count=count+1;
       n=n/10;
   }
  cout<<oddeve(num,count);

  return 0;
 }

 int oddeve(int num,int count)
 {  int i=count,rem,odd=0,eve=0,res;

     while(num>0)
     {
         rem=num%10;
         if(i%2==0)
         {
             eve=eve+rem;
             i--;
         }
         else
         {
             odd=odd+rem;
             i--;
         }
         num=num/10;
     }

     res=abs(odd-eve);
    

     return res;
     
 }