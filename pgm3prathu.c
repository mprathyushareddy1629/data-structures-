#define SIZE 50
#include<ctype.h>
#include<stdio.h>
int s[SIZE];
int top=-1;
int push (int elem)
{
	s[++top]=elem;
}
int pop()
{
	return(s[top--]);
}
void main()
{
	char pofx[50],ch;
	int i=0,op1,op2;
	printf("\n enter the post fix expression :");
	scanf("%s",pofx);
	while ((ch=pofx[i++])!='\0')
	{
		if(isdigit(ch))push(ch-'0');
		else
		{
			op2=pop();
			op1=pop();
			switch(ch)
			{
				case'+':push(op1+op2);
				        break;
				case'-':push(op1-op2);
				        break;
				case'*':push(op1*op2);
				        break;
                case'/':push(op1/op2);
				        break;


			}
		}
	}
	printf("\n given postfix expn :%s",pofx);
	printf("\nresult after evaluation :%d",s[top]);
}