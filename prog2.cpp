#include<iostream>
#include<fstream>
using namespace std;
 ArraySum(int i)
{
 int *a=new int[i];
 int sum=0;
 int n=0;
  ifstream fin("d:\\shuju2.txt");
  if(!fin)
  {cout<<"不能打开文件\n";}
for(n=0;fin>>a[n],n<i;n++)
{ sum+= a[n];}
  fin.close();
return sum;
}
int main(void)
{int i;
cout<<"输入数组长度"<<endl;
cin>>i;
cout<<"长度为"<<i<<"的数组和为"<<ArraySum(i)<<endl;
return 0;
}