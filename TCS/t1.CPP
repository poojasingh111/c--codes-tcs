// ARMSTRONG NUMBER

#include<iostream>
#include<cmath>
using namespace std;
int main(){
int number,powr=0,originalno,sum=0,lastdigit,num;
cin>>number;

originalno = number ;
num=number;
while(num!=0){
    num=num/10;
    powr++;
}
 
while(number>0){
    lastdigit = number%10;
    sum = sum + pow(lastdigit,powr);
    number=number/10;
}

if(originalno==sum){
    cout<<"this number is armstrong";
}
else{
    cout<<"this is not a armstrong number";
}
 
 return 0;
}