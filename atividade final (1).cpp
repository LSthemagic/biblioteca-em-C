#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

struct cadastro_user {
	char r_nome[50];
	char idade[3];
	char nome[50];
	char email[50];
	char senha[50];
	char r_senha[50];
}leitor[20];
struct cadastro_livro{
	char cod[50];
	char nome[50];	
}cad_livro[20];

 
main(){
	
	system("color 3F");
	
	setlocale(LC_ALL,"portuguese");

	int emp,emp1;
	int i,op,qntd=0,cont;
	FILE *leitura;  
	FILE *cadastro;
	
	
	
	do{
		system("cls");
		printf("=============================================== \n\n");
		printf("\tBem vindo a 'LS' leitura e cia \n");
		printf(" \n");
		printf("=============================================== \n");
		printf("\t MENU DE OPÇÕES \n\n");
		printf("[1] - CADASTRAR LEITOR\n");
		printf("[2] - CADASTRAR LIVRO\n");
		printf("[3] - EMPRÉSTIMO DE LIVRO\n");
		printf("[4] - SAIR\n");
		printf("=============================================== \n");
		printf("Digite o opção escolhida \n");
		fflush(stdin);
		scanf("%i",&op);	
		
		int x = 1 + (rand() % 5); 
		
		switch(op){
		
			case 1:
			system("cls");
			printf("DIGITE A QUANTIDADE DE LEITORES QUE SERÃO CADASTRADOS : ");
			scanf("%i",&qntd);
			
			for(i=1;i<=qntd;i++){
				
					cadastro = fopen("cad.txt","a");
					
					if(cadastro == NULL){
								
										printf("Erro ao criar ou abrir arquivo");
										
					}else{
											system("cls");													
											printf("DIGITE O NOME : \n");
											fflush(stdin);
											fgets(leitor[i].nome,50,stdin);
											printf("CADASTRE A SENHA: \n");
											fflush(stdin);
											fgets(leitor[i].senha,17,stdin);
											printf("DIGITE O NOME NOVAMENTE : \n");
											fflush(stdin);
											fgets(leitor[i].r_nome,50,stdin);
											printf("DIGITE A SENHA NOVAMENTE : \n");
											fflush(stdin);
											fgets(leitor[i].r_senha,17,stdin);
											printf("DIGITE A IDADE : \n");
											fflush(stdin);
											fgets(leitor[i].idade,3,stdin);
											printf("CADASTRE O EMAIL : \n");
											fflush(stdin);
											fgets(leitor[i].email,50,stdin);
										
											printf("==================================== \n");
					}

							fprintf(cadastro,"NOME : %s ",leitor[i].nome);
							fprintf(cadastro,"IDADE : %s \n",leitor[i].idade );
							fprintf(cadastro,"EMAIL : %s ",leitor[i].email);
							fprintf(cadastro,"SENHA : %s ",leitor[i].senha);
							fprintf(cadastro,"==================================== \n");
							fclose(cadastro);
			}
			
			system("cls");
			printf("================================= \n");
			printf("\tCADASTRO SALVO \n");
			printf("================================= \n");
			
			system("timeout 3");
							
			break;
				
			case 2:
			system("cls");
			printf("DIGITE A QUANTIDADE DE LiVROS QUE SERÃO CADASTRADOS : ");
			scanf("%i",&qntd);
			
			for(i=1;i<=qntd;i++){
				
					leitura = fopen("livro.txt","a");
					
					if(leitura == NULL){
						
									printf("ERRo!!");
					}else{
					
					
								printf("DIGITE O NOME DO LIVRO : \n");
								fflush(stdin);
								fgets(cad_livro[i].nome,50,stdin);							
								printf("DIGITE O CÓDIGO DO LIVRO : \n");
								fflush(stdin);
								fgets(cad_livro[i].cod,50,stdin);
								printf("==================================== \n");
		}		
					fprintf(leitura,"NOME DO LIVRO : %s ",cad_livro[i].nome);
					fprintf(leitura,"CÓDIGO DO LIVRO : %s ",cad_livro[i].cod);
					fprintf(leitura,"==================================== \n");
					fclose(leitura);
		}
			system("cls");
			printf("================================= \n");
			printf("\tCADASTRO SALVO \n");
			printf("================================= \n");
					
			system("pause");				
			break;
				
			case 3:	
			system("cls");
			
				if(strcmp(leitor[i].nome,leitor[i].r_nome) && strcmp(leitor[i].senha,leitor[i].r_senha)){
			
								system("cls");
								printf("================================================== \n");
								printf("\tOPPS! ALGO DEU ERRADO \n");	
								printf("\tPOR FAVOR, DIGITE UM NOME E SENHA VÁLIDO \n");
								printf("================================================== \n");
				}else{	
			
				printf("\t\n           A COMPANHIA 'LS' LITERATURA, \n");
				printf("\tLHE APRESENTA OS MELHORES LIVROS!! \n\n");	
			
				for(i=1;i<=qntd;i++){											
						printf("%iº LIVRO : %s \n",i,cad_livro[i].nome);
						printf("%iº CÓDIGO DO LIVRO : %s \n",i,cad_livro[i].cod);
						printf("================================================== \n\n");
				}
				
					
		
															printf("================================================== \n");
															printf("DIGITE A POSIÇÃO DO LIVRO PRETENDIDO : \n\n");
															fflush(stdin);
															scanf("%i",&emp);
															printf("CONFIRME A POSIÇÃO DO LIVRO * número que você digitu anteriormente * : \n");
															fflush(stdin);
															scanf("%i",&emp1);
															printf("==================================== \n");
															
																
																	
															
															
																					if(emp==emp1){
																	
																					
																											if(emp>qntd || emp1>qntd){
																									
																														system("cls");
																														printf("================================= \n");
																														printf("\tOPPS! :( \n");
																														printf("\tOPÇÃO INVÁLIDA!! \n");	
																														printf("================================= \n");	
																									
																							
																											}else{
																						
																														strcpy(cad_livro[emp].nome," LIVRO EMPRESTADO");
																														strcpy(cad_livro[emp].cod," LIVRO EMPRESTADO");
																														system("cls");
																														printf("=============================================== \n");
																														printf("\tDIVIRTA-SE! \n");
																														printf("\tO LIVRO É TEMPORARIMENTE SEU!! \n");	
																														printf("=============================================== \n");
																											}
																	
																				}else{
																				
																								system("cls");
																								printf("================================= \n");
																								printf("\tOPPS! :( \n");
																								printf("\tOPÇÃO INVÁLIDA!! \n");	
																								printf("================================= \n");	
																				}
																				
																	}
										
					system("timeout 3");
			break;
				
			case 4:
				
			system("cls");
			
						printf("=================================================================== \n");
						printf("\tOBRIGADO POR ESCOLHER A COMPANHIA 'LS' LITERATURA! \n");
						printf("\tSERÁ UM PRAZER LHE VER AQUI NOVAMENTE!! \n");	
						printf("=================================================================== \n");
						
			system("pause");				
			break;
				
			default:
			system("cls");
			printf("============================================== \n");
			printf(" \n");
			printf("\tOpção Inválida \n");
			printf(" \n");
			printf("============================================== \n");	
			system("timeout 3"); 
				
				}
			}while(op!=4);
		
	}
					

