#include<math.h> 
#include<stdio.h> 
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
    //����A��Colesky�ֽ⼰�����Լ���
    for(k=1;k<=n;k++)
    for(j=k;j<=n;j++)
    for(i=k+1;k<=n;k++)
    {   if(j=k)A[j][k]=A[k][j]/sqrt(A[k][k]);
        else
		{
            A[j][k]=A[k][j]/sqrt(A[k][k]);
            A[i][j]=A[i][j]-A[i][k]*A[k][j]/A[k][k];
    
	 } 
}
	 printf("���ݼ������TΪ��\n");
   for(i=0;i<=n-1;i++)
   for(j=0;j<=n-1;j++)
   {
   	  if(i>=j)printf("%f\t",A[i][j]);  
     	else printf("0.000000\t");
     	nu--;
     	if(nu%n==0)printf("\n");
   } 
}
