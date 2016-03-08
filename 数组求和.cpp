#include<iostream>
#include<fstream>
using namespace std;
int main(void)
{
 int a[100];
 int i=0;
 int sum=0;
  ifstream fin("d:\\shuju.txt");
  if(!fin)
  {cout<<"不能打开文件\n";}
for(i=0;fin>>a[i],i<100;i++)
{ sum+= a[i];}
  fin.close();
 cout<<sum<<endl;
 return 0;
}# SUM
