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
  {cout<<"���ܴ��ļ�\n";}
for(n=0;fin>>a[n],n<i;n++)
{ sum+= a[n];}
  fin.close();
return sum;
}
int main(void)
{int i;
cout<<"�������鳤��"<<endl;
cin>>i;
cout<<"����Ϊ"<<i<<"�������Ϊ"<<ArraySum(i)<<endl;
return 0;
}