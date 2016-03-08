#include<iostream>
#include<fstream>
using namespace std;

ArraySum(int bottom,int top,int i )
{
int sum=0;
int n;
int *a=new int[n];
ifstream fin("d:\\shuju2.txt");
 if(!fin)
  {cout<<"不能打开文件\n";}
for(n=0;fin>>a[n],n<i;n++)
{if(bottom<=a[n]&&top>=a[n])
sum+=a[n];
}
fin.close();
return sum;
}

int main()
{
int top,bottom;
cout<<"输入top：";
cin>>top;
cout<<"输入bottom：";
cin>>bottom;
int i;
cout<<"输入数组长度为：";
cin>>i;
cout<<"数组和为"<<ArraySum(bottom,top,i)<<endl;
}