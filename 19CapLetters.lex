%{
	#include<stdio.h>
%}

%%
[A-Z]+[\t\n ] { printf("%s",yytext); }
.  ;
%%

main( ) 
{
	printf("Enter some string with capital words in between\n");
	yylex();
}

int yywrap( )
{
	return 1;
}
