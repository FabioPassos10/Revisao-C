#define Tam 30



typedef struct {
int id;
char nome[50];
float altura;
float peso;
float imc;
char situacao[60];
} Pessoa;
Pessoa pessoa[Tam];


void ColetaDados(){};//Função que coleta os dados dos usuários
void ExibirDados(){};//Mostra os dados do usuario com o imc e peso ideal
void IMC(Pessoa pessoa[]){}// Função que retorna o IMC da pessoa
