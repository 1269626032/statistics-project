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
		   A[j][i]=A[j][i]-A[j][k]*A[k][i];
	    } 
	 if(A[i][i]==0)
	 {
	 	printf("����A������LR�ֽ�");
		exit (0); 
	 }
	 else A[j][i]=A[j][i]/A[i][i];
   }
   //�������R��L 
    printf("���ݼ������LΪ��\n");
for(i=0;i<=n-1;i++)
  for(j=0;j<=n-1;j++)
   {
   	  if(i>=j)printf("%f\t",A[i][j]);
      else printf("0.000000\t");
     	nu++;
     	if(nu%n==0)printf("\n");
   } 
   printf("���ݼ������DΪ��\n");
   for(i=0;i<=n-1;i++)
   for(j=0;j<=n-1;j++)
   {
   	if(i>j) printf("0.000000\t");
    else if(i<j)
	printf("0.000000\t");
	else printf("%f\t",A[i][i]);
    nu--;
    if(nu%n==0)printf("\n");
   }  
   printf("���ݼ������R*Ϊ��\n");
   for(i=0;i<=n-1;i++)
   for(j=0;j<=n-1;j++)
  { A[i][j]=A[i][j]/A[i][i];
   	    if(i<=j)printf("%f\t",A[i][j]);
        else printf("0.000000\t");
        nu++;
        if(nu%n==0)printf("\n");
   }
  
   return 0;
}

