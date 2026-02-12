%{
%}

%%

^[a-zA-Z_][a-zA-Z0-9_]*$ {
printf("Given Input is valid identifier\n");
}

.+ {
printf("Given Input is not valid\n");
}

%%

int main(){
printf("Enter the identifier : \n");
yylex();
}
int yywrap(){}
