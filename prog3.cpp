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
  {cout<<"���ܴ��ļ�\n";}
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
cout<<"����top��";
cin>>top;
cout<<"����bottom��";
cin>>bottom;
int i;
cout<<"�������鳤��Ϊ��";
cin>>i;
cout<<"�����Ϊ"<<ArraySum(bottom,top,i)<<endl;
}