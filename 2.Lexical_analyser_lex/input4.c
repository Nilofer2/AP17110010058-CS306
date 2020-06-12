%{
#include<stdio.h>
%}


/*Rule Section*/

%%
/*Regular expression for single line comment*/
\/\/(.*) {};					
/*Regular expression for multi line comment*/
\/\*(.*\n)*.*\*\/  {};			
%%

/*call the yywrap function*/
int yywrap()
{
return 1;
}



/*Auxiliary function*/
/*Driver function*/

int main()
{
yyin=fopen("input4.c","r");
yyout=fopen("out.c","w");
/*call the yylex function.*/
yylex();
return 0;
}