#include <stdio.h>
#include <string.h>

struct Funcionario{
    char nome[100];
};

struct Funcionario criarFuncionario(char* funcionario){
    struct Funcionario novoFuncionario;
    fgets(novoFuncionario.nome, sizeof(novoFuncionario.nome), stdin); 
    return novoFuncionario;
}

struct Funcionario criarEmailInstitucional(char* nome) {
    int cout=0, aux=0;
    char sobrenome[20];
    nome[strcspn(nome, "\n")] = '\0';
    for(int i=0; i<strlen(nome); i++){
        if(nome[i]==' '){
            cout=i;
        }
    }
    for(int j=cout; j<strlen(nome); j++){
        sobrenome[aux] = nome[j+1];
        aux++;
    }
    printf("%c%s@lp.com.br", nome[0], sobrenome);
}
    
int main(){
    struct Funcionario funcionario1 = criarFuncionario("carlos eduardo pinheiro");
    criarEmailInstitucional(funcionario1.nome);
    return 0;
}