#include<stdio.h>
int main()
{
int m,n,a[20][20],b[20][20],i,j,sum[20][20],sub[20][20],opt,tr[20][20],opt1,ch,e,f;
printf("enter the number of rows for first matrices:\n");
scanf("%d",&m);
printf("enter the number of columns for first matrices:\n");
scanf("%d",&n);
printf("enter the data element of the first matrices \n");
for(i=0;i<m;i++)
{
 for (j=0;j<n;j++)
  {
   scanf("%d",&a[i][j]);
 }
}
printf("enter the number of rows for second matrices :\n");
scanf("%d",&e);
printf("enter the number of columns for second matrices:\n");
scanf("%d",&f);
printf("enter the data element of the second matrices \n");
for(i=0;i<e;i++)
{
 for (j=0;j<f;j++)
  {
   scanf("%d",&b[i][j]);
 }
}
do
{
 if(m==e && n==f)
{
 printf("enter 1 for addition or subtraction of matrices \n");
 if(n==e)
  { 
    printf("enter 2 for multiplication of matrix\n");
    printf("enter 3 for transpose of first matrix\n");
  }
else if (m!=n && n==e)
    {
      printf("enter 2 for multiplication of matrix\n");

     }
 else 
    {
       printf("enter 3 for transpose of first matrix\n");
    } 
 
scanf("%d",&ch);
switch(ch)
{
 case 1:
      for(i=0;i<m;i++)
       {
         for (j=0;j<n;j++)
         {
	   sum[i][j]=a[i][j]+b[i][j];
           sub[i][j]=a[i][j]-b[i][j];
          }
        }
printf("enter 1 for addition or 2 for subtraction:\n ");
scanf("%d",&opt);
switch(opt)
{
 case 1:
    printf("the resultant matrix is :\n");
      for(i=0;i<m;i++)
       {
         for (j=0;j<n;j++)
         {
           printf("%3d\n",sum[i][j]);
          }
        }
    break;
  case 2:
     printf("the resultant matrix is :\n");
      for(i=0;i<m;i++)
       {
         for (j=0;j<n;j++)
         {
           printf("%3d\n",sub[i][j]);
          }
        }
     break;
}
case 2:
   printf("the resultant matrices are :\n");
    int k;
     for(i=0;i<m;i++)
       {
         for (j=0;j<f;j++)
         {
           sum[i][j]=0;
          for (k=0;k<m;k++)
           {
	     sum[i][j]+=a[i][j]*b[i][j];
	    }
	  printf("%d\n",sum[i][j]);
	 }
       }
      break;
case 3:
     for(i=0;i<m;i++)
       {
         for (j=0;j<n;j++)
         {
           tr[j][i]=a[i][j];
          }
         }
     printf("the resultant matrices is :\n");
       for(i=0;i<n;i++)
       {
         for (j=0;j<m;j++)
         {
	   printf("%3d",tr[i][j]);
         }
       printf("\n");
       } 
   break;
}
}
}
while(ch>0);
}
     