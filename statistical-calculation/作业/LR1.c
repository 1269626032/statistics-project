#include<stdio.h>
#include<stdlib.h>
main()
{
	int n,i,j,k,nu=0;
	//�������A
	printf("��������Ҫ�ֽ�ľ���Ľ���:\n");
	scanf("%d",&n);
	float A[n][n];
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
    //����A��LR�ֽ����֤ 
	for(i=0;i<=n-1;i++)
	for(j=i;j<=n-1;j++)
	{
		for(k=0;k<=i-1;k++)
	    {
		   A[i][j]=A[i][j]-A[i][k]*A[k][j];
		   if(j>i)A[j][i]=A[j][i]-A[j][k]*A[k][i];
	    } 
	 if(i<n-1&&A[i][i]==0)
	 {
	 	printf("����A������LR�ֽ�");
		exit (0); 
	 }
	 else
	 if(j>i) A[j][i]=A[j][i]/A[i][i];
   }
   //�������L*��R* 
    printf("���ݼ������R*Ϊ��\n");
   for(i=0;i<=n-1;i++)
   for(j=0;j<=n-1;j++)
  {
  	    if(j>=i+1&&i!=n-1) A[i][j]=A[i][j]/A[i][i];
   	    if(i<j) printf("%f\t",A[i][j]);
        else if(i>j) printf("0.000000\t");
        else printf("1.000000\t");
        nu--;
        if(nu%n==0)printf("\n");
   }
   printf("���ݼ������L*Ϊ��\n");
   for(j=0;j<=n-1;j++)
   for(i=0;i<=n-1;i++)
   {if(i>=j+1&&j<n-1) A[i][j]=A[i][j]*A[i][i];
   	
	   if(i>=j)printf("%f\t",A[i][j]);
       else printf("0.000000\t");
      nu++;
      if(nu%n==0)printf("\n");
   }
    
  return 0;
}

