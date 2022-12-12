#include <stdio.h>
#include <stdlib.h>

//3. Escreva	 um	 programa	 que	 verifique	 a	 validade	 de	 uma	 senha	 fornecida
//pelo	 usuário.	 A	 senha	 válida	 é	 o	 número	 1234.	Devem	 ser	impressas	 as
//seguintes	mensagens:
//         ACESSO	PERMITIDO	caso	a	senha	seja	válida.
//         ACESSO	NEGADO	caso	a	senha	seja	inválida.

int main(){

    int senha;

    printf("Digite a senha: ");
    scanf("%d", &senha);

    if(senha == 1234){

        printf("\nACESSO	PERMITIDO\n");
    }else{
        printf("\nACESSO	NEGADO\n");
    }


return 0;
}
