#include<stdio.h>
#include<stdlib.h>
#include<math.h> 
main()
{
	int n,i,j,k,nu=0;
	//�������A
	printf("��������Ҫ�ֽ�ľ���Ľ���:\n");
	scanf("%d",&n);
	float A[n][n];
	float T[n][n]; 
	printf("���������A:\n");
	for(i=0;i<=n-1;i++)
	for(j=0;j<=n-1;j++)
	   scanf("%f",&A[i][j]);
	printf("��������ľ�����:\n");
	for(i=0;i<=n-1;i++)
	for(j=0;j<=n-1;j++)
	{
		nu++;
	    printf("%f\t",A[i][j]);
	    if(nu%n==0)printf("\n");
    }
    //����A��Colesky�ֽ⼰�����Լ���
	for(i=0;i<=n-1;i++)
	for(j=i;j<=n-1;j++)
	{
		for(k=0;k<=i-1;k++)
		A[i][i]=A[i][i]-T[i][k]*T[i][k];
		T[i][i]=sqrt(A[i][i]);
		for(k=0;k<=i-1;k++)
		A[j][i]=A[i][j]-T[i][k]*T[j][k]; 
		T[j][i]=A[j][i]/T[i][i];
	} 
	 printf("���ݼ������TΪ��\n");
   for(i=0;i<=n-1;i++)
   for(j=0;j<=n-1;j++)
   {
   	  if(i>=j)printf("%f\t",T[i][j]);  
     	else printf("0.000000\t");
     	nu--;
     	if(nu%n==0)printf("\n");
   } 
}
