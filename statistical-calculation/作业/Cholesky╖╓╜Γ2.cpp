#include<stdio.h>
#include<stdlib.h>
#include<math.h> 
main()
{
	int n,i,j,k,nu=0;
	//�������A
	printf("��������Ҫ�ֽ�ľ���Ľ���:\n");
	scanf("%d",&n);
	float A[n*(n+1)/2];
	float T[n*(n+1)/2];
	printf("���������A:\n");
	for(i=0;i<=n*(n+1)/2-1;i++)
	   scanf("%f",&A[i]);
	printf("��������ľ�����:\n");
	for(i=0;i<=n-1;i++)
	for(j=0;j<=n-1;j++)
	{
		nu++;
	    if(i>=j)printf("%f\t",A[(i*i+i)/2+j]);
	    else printf("%f\t",A[(j*j+j)/2+i]);
	    if(nu%n==0)printf("\n");
    }
     //����A��Colesky�ֽ⼰�����Լ���
   for(i=0;i<=n*(n+1)/2-1;i++)
	{
		for(k=0;k<=i-1;k++)
		{
			T[i*(i+1)/2+i]=A[i*(i+1)/2+i]-T[i*(i+1)+k]*T[i*(i+1)+k];
		    T[j*(j+1)/2+i]=A[i*(i+1)+j]-T[i*(i+1)+k]*T[j*(j+1)+k]; 
		}
		 T[i*(i+1)+i]=sqrt(T[i*(i+1)+i]);
		 T[j*(j+1)+i]=T[j*(j+1)+i]/T[i*(i+1)+i]; 
	} 
	 printf("���ݼ������TΪ��\n");
   	for(i=0;i<=n-1;i++)
	for(j=0;j<=n-1;j++)
	{
		if(i>j)printf("%f\t",T[i*(i+1)+j]);  
     	else printf("0.000000\t");
     	nu--;
     	if(nu%n==0)printf("\n");
    }
}
