#include <stdio.h>
#include "aluno.c"

int main()
{
 

  
    
    system("cls");

    int Escolha, Escolha2 = 0, matricula, matricula_buscada, quantidadealunos = 0;

    Alunos *Vetor_alunos = (Alunos*) malloc(1 * sizeof(Alunos));


    FILE *ArquivoAlunos;

    ArquivoAlunos = fopen("ArquivoAlunos.txt", "r");

    if (ArquivoAlunos == NULL)
    {
        printf("Nenhum aluno cadrastaodo.\n");
    }
    else
    {
        
        fscanf(ArquivoAlunos, "%d", &quantidadealunos);
       
        Vetor_alunos = realloc(Vetor_alunos, quantidadealunos * (sizeof(Alunos)));
        lertxt(Vetor_alunos, quantidadealunos);
         
    }

    fclose(ArquivoAlunos);
    
    


  while (Escolha2 != 4)
  {
     printf("\n\nAlunos cadrastados: %d\n", quantidadealunos);
    

    printf("\n\nMenu\n\nPara cadrastar um aluno digite (1)\nPara Buscar um aluno digite (2)\nListar alunos digite (3)\nPara sair digite (4)\nescolha: ");
    scanf("%d", &Escolha2);
    
    

    if(Escolha2 == 1){

    quantidadealunos++;
    Vetor_alunos = realloc(Vetor_alunos, quantidadealunos * (sizeof(Alunos)));
    cria_aluno(Vetor_alunos, quantidadealunos);
    
    

    }else if(Escolha2 == 2 ){

    printf("\n\nDigite como deseja buscar o aluno?\n(Digite 1 para busca por nome)\n(Digite 2 para busca por matricula)\nEscolha: ");
    scanf("%d", &Escolha);

    if (Escolha == 1)
    {

      

    }

    else if (Escolha == 2)
    {

        
    }
     
    }else if(Escolha2 == 3){

      imprime_aluno(Vetor_alunos, quantidadealunos);

    }


  }

  criatxt(Vetor_alunos, quantidadealunos);
  
    
   
  libera_aluno(Vetor_alunos);
    
   
   
    return 0;
}