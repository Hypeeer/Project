#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
//struct de cadastro de projetos
struct projectS
{
  int valor[5], ano[10];
  char titulo[30], descri[50], status[20], gerenp[30], empr[20], colab[30];
};

int main(){
//pode mudar variaveis
    setlocale(LC_ALL, "Portuguese");
    int escolha, op;
    int status;
    struct projectS projectX[200];
    int contador = 1, i = 1;
    int satusnum1, satusnum2, satusnum3;
    
do{
    //menu principal
    printf("\n");
        printf ("\t\t\t\tCadastro De Projetos!\n");
        printf ("\t\t\t====================================\n");
        printf ("\t\t\t|\t                           |\n");
        printf("\t\t\t|    1 - Cadastrar um Projeto      |\n");
        printf("\t\t\t|    2 - Todos os Projetos         |\n");        
        printf("\t\t\t|    0 - Sair                      |\n");
        printf ("\t\t\t====================================\n");
        
        printf ("\n\n");
        printf("\t\t\tPor favor, selecione uma opcao: ");
        scanf("%d", &escolha);
        fflush(stdin);
        switch (escolha){
            case 1:
            //menu de cadastros de projetos (p)
            printf("\n");
                printf ("\t\t\t====== STATUS DO SEU PROJETO ======\n");
                printf("\t\t\t|   1 - Projetos A Fazer          |\n");
                printf("\t\t\t|   2 - Projetos Sendo Feitos     |\n");
                printf("\t\t\t|   3 - Projetos Concluidos       |\n");
                printf ("\t\t\t=================================== \n");
                
                printf ("\n\n");
                printf("\t\t\tPor favor, selecione uma opcao: ");
                scanf("%d", &status);
                fflush(stdin);
                //Armazenagem de dados 1 (p)               
                    switch (status)
                    {
                    case 1:
                        printf("\n");
                        printf("\t\t\t*********A FAZER********\n");                
                        break;
                    case 2:
                        printf("\n");
                        printf("\t\t\t********SENDO FEITO******\n");                        
                        break;
                    case 3:
                        printf("\n");
                        printf("\t\t\t********CONCLUIDO*******\n");
                        break;
                    
                    default:
                        printf("\t\t\tOpção invalida!");           
                        break;
                    }
                    //Menu com os 3 status.
                        switch (status)
                        {
                            do
                            {
                                 case 1:
                                printf("certo");
                                break;
                            case 2:
                                printf("certo2");
                                break;
                            case 3:
                                printf("certo3");
                                break;
                                                                                                                                                                                                                                                                       
                            default:
                                    printf("erro ");
                                break;
                            } while (op != 1);
                                                                                                                                                                                                                                                                        
                            default:
                                    printf("erro ");
                                break;
                        }

                break;
            case 2:
                printf("\n");
                printf ("\t\t\t======================================= \n");
                printf("\t\t\t\t******** Listagem ********\n");
                printf ("\t\t\t======================================= \n");
            //Menu de listagem (l)               
                for (i = 1; i < contador; i++){
                    printf("\t\t\t1  Codigo:%d    \n", i);                    
                    printf("\t\t\t2  Titulo:%s    ", projectX[i].titulo);
                    printf("\t\t\t3  Gerente Do Projeto%s", projectX[i].gerenp);
                    printf("\t\t\t4  Descricao:%s", projectX[i].descri);
                    printf("\t\t\t5  Ano:%s       ", projectX[i].ano);
                    printf("\t\t\t6  Empresa:%s       ", projectX[i].empr);
                    printf("\t\t\t7  Calaboradores:%s       ", projectX[i].colab);
                    printf("\t\t\t8  Valor do Projeto:%s       ", projectX[i].valor);
                    printf("\t\t\t9  Status:%d      \n", satusnum1 = 1);
                    printf ("\t\t\t======================================= \n");                                
                }                                          
                printf("\t\t\tAperte 0 para voltar ao menu:");
                scanf("%d", &op);                                
                break;                                             
            case 0:
                printf("\t\t\tFim dos Cadastros");
                break;
            
            default:
                printf("\t\t\tOpicao Invalida!\n");
                printf("\t\t\tAperte qualquer tecla:");
                scanf("%d", &escolha);
        }
    }while (op != 0);
        
        return(0);
}
