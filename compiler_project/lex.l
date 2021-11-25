%{
    #include <stdio.h>
    int yycolumn=1;
%}


%option yylineno

LETTER [a-zA-Z]
DIGIT  [0-9]

ID ({LETTER}|{LETTER}({LETTER}|"_"|{DIGIT})*({LETTER}|{DIGIT}))
NUMERAL {DIGIT}+

ID_BEGIN_DIGIT ({DIGIT}|"_")+{ID}+
ID_END_UNDERSCORE {ID}+"_"

%%

"+"                        {printf("ADD\n");}
"-"                        {printf("SUB\n");}
"*"                        {printf("MULT\n");}
"/"                        {printf("DIV\n");}
"%"                        {printf("MOD\n");}


"<"                        {printf("LT\n");}
">"                        {printf("GT\n");}
"=="                       {printf("EQ\n");}
"<="                       {printf("LTE\n");}
">="                       {printf("GTE\n");}
"<>"                       {printf("NEQ\n");}


"program"                  {printf("PROGRAM\n");}
"beginprogram"             {printf("BEGIN_PROGRAM\n");}
"endprogram"               {printf("END_PROGRAM\n");}
"integer"                  {printf("INTEGER\n");}
"array"                    {printf("ARRAY\n");}
"of"                       {printf("OF\n");}
"if"                       {printf("IF\n");}
"then"                     {printf("THEN\n");}
"endif"                    {printf("ENDIF\n");}
"else"                     {printf("ELSE\n");}
"while"                    {printf("WHILE\n");}
"loop"                     {printf("LOOP\n");}
"endloop"                  {printf("ENDLOOP\n");}
"read"                     {printf("read\n");}
"write"                    {printf("WRITE\n");}
"and"                      {printf("AND\n");}
"or"                       {printf("OR\n");}
"true"                     {printf("TRUE\n");}
"false"                    {printf("FALSE\n");}


";"                        {printf("SEMICOLON\n");}
":"                        {printf("COLON\n");}
","                        {printf("COMMA\n");}
"?"                        {printf("QUESTION\n");}
"("                        {printf("LEFT_PAREN\n");}
")"                        {printf("RIGHT_PAREN\n");}
":="                       {printf("ASSIGN\n");}
[ \r\t]                    {}
\n                         {yycolumn=1;}


{ID}                      {printf("IDENT %s\n",yytext);}

{NUMERAL}                 {printf("NUMBER %s\n",yytext);}

{ID_BEGIN_DIGIT}          {printf("There was error in declaring identifier must begin with letter");exit(1);}

{ID_END_UNDERSCORE}       {printf("Identifier %s cannot end with underscore",yytext);exit(1);}

.                         {printf("Unrecognized symbol %s was encountered at line %i",yytext,yylineno);exit(1);}



%%

main()
{
   yylex();
}




