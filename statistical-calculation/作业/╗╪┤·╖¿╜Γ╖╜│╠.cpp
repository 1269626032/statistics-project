#include<stdio.h>
main()
{
	int n,i,j,k,nu=0;
	//�������A
	printf("���������T�Ľ���:\n");
	scanf("%d",&n);
	float T[n*(n+1)/2];
	float b[n];
	printf("���������T:\n");
	for(i=0;i<=n*(n+1)/2-1;i++)
	   scanf("%f",&T[i]);
	printf("��������ľ�����:\n");
	for(i=0;i<=n-1;i++)
	for(j=0;j<=n-1;j++)
	{
		nu++;
	    if(i<=j)printf("%f\t",T[(j*j+j)/2+i]);
	    else printf("0.000000\t");
	    if(nu%n==0)printf("\n");
    }
    printf("\n����������b��\n");
     for(i=1;i<=n-1;i++)
    scanf("%f",&b[i]);
    printf("\n�����������bΪ:\n");
    for(i=1;i<=n-1;i++)
    printf("%f\t",b[i]);
    for(i=n-1;i>=1;i--)
	for(k=i+1;k<=n;k++)
	b[i]=b[i]-b[k]*T[k*(k+1)/2+i];
	b[i]=b[i]/T[i*(i+1)+i];
		
	printf("\n\n������ý�Ϊ:\n");
	for(i=0;i<=n-1;i++)
		printf("%f\t",b[i]);
	
	
	
	} 
