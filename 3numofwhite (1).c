#include<stdio.h>
int sc=0,wc=0,lc=0;
{ lc++; cc+=yyleng;}
 { sc++; cc+=yyleng;}
 { wc++;  cc+=yyleng;}

int main(int argc ,char* argv[])
{
	if(argc==2)
	{
		yyin=fopen(argv[1],"r");
	}
	else
	{
		printf("Enter the input\n");
		yyin=stdin;
	}
	yylex();
	printf("The number of lines=%d\n",lc);
	printf("The number of spaces=%d\n",sc);
	printf("The number of words=%d\n",wc);
	printf("The number of characters are=%d\n",cc);
}

int yywrap( )
{
	return 1;
}
