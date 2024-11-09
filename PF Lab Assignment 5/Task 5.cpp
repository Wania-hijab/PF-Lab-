#include<iostream>
using namespace std;
int main() { 
int temp1,temp2,temp3,temp4,temp5,temp6,temp7;
int sum,avg_temp;
cout<<"Enter temperature on Monday in Celsius"<<"\t";
cin>>temp1;
cout<<"Enter temperature on Tuesday in Celsius"<<"\t";
cin>>temp2;
cout<<"Enter temperature on Wednesday in Celsius"<<"\t";
cin>>temp3;
cout<<"Enter temperature on Thursday in Celsius"<<"\t";
cin>>temp4;
cout<<"Enter temperature on Friday in Celsius"<<"\t";
cin>>temp5;
cout<<"Enter temperature on Saturday in Celsius"<<"\t";
cin>>temp6;
cout<<"Enter temperature on Sunday in Celsius"<<"\t";
cin>>temp7;

sum=temp1+temp2+temp3+temp4+temp5+temp6+temp7;
avg_temp=sum/7;

cout<<"The average temperature of the whole week is "<<avg_temp;
return 0;
}