#include<stdio.h>
int main()
{	int a,sum1,n,n1,n2;
	a=1;sum1=0;
	printf("请输入一个整数：");
	scanf("%d",&n);
	n1=n;n2=n;
	while(n>0)
	{
		sum1=sum1+a;
		a++;
		n--;
	} 
	printf("sum1=%d\n",sum1);
	a=1; int sum2=0;
	do 
	{
		sum2=a+sum2;
		a++;
		n1--;
	}while(n1>0);
	printf("sum2=%d\n",sum2);
	int sum3=0;
	for(a=0;n2>=0;a++)
	{
		sum3+=a;
		n2--;
	}
	printf("sum3=%d\n",sum3);
	return 0;
}
