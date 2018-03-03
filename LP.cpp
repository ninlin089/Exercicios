#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<locale.h>
main(){
setlocale(LC_ALL, "Portuguese");
int Q1,Q2,Q3,Q4,Q5,Q6,i,N1;


printf("\n Seja Bem Vindo Ao Jogo dos Animais");
printf("\n Deseja jogar?");
printf("\n Digite 1-para sim ou qualquer outro número para não \n");
scanf("%d",&N1);
while(N1==1){
printf("\n Escolha um dentre os animais que virão a seguir:");
printf("\n Leão     ");
printf("\n Cavalo   ");
printf("\n Homem    ");
printf("\n Macaco   ");
printf("\n Mercego  ");
printf("\n Baleia   ");
printf("\n Avestruz ");
printf("\n Pinguim  ");
printf("\n Pato     ");
printf("\n Águia    ");
printf("\n Tartaruga");
printf("\n Crocodilo");
printf("\n Cobra    ");
printf("\n ");
printf("\n ");

printf("\n O animal que você escolheu é Mamífero?");
printf("\n Digite 1-para sim e outro número para não \n");
scanf("%d",&Q1);
printf("\n O animal que você escolheu é Quadrupede?");
printf("\n Digite 1-para sim e outro número para não \n");
scanf("%d",&Q2);
printf("\n O animal que você escolheu é Carnívoro?");
printf("\n Digite 1-para sim e outro número para não \n");
scanf("%d",&Q3);
printf("\n O animal que você escolheu é Herbívoro?");
printf("\n Digite 1-para sim e outro número para não \n");
scanf("%d",&Q4);
printf("\n O animal que você escolheu Possui Asas?");
printf("\n Digite 1-para sim e outro número para não \n");
scanf("%d",&Q5);
printf("\n O animal que você escolheu é Aquático?");
printf("\n Digite 1-para sim e outro número para não \n");
scanf("%d",&Q6);

if(Q1==1 && Q2==1 && Q3==1 && Q4>1 && Q5>1 && Q6>1){
printf("Você escolheu o Leão");
}
else{
	if(Q1==1 && Q2==1 && Q3>1 && Q4==1 && Q5>1 && Q6>1){
	printf("Você escolheu o Cavalo");
	}
	else{
		if(Q1==1 && Q2>1 && Q3==1 && Q4==1 && Q5>1 && Q6>1){
		printf("Você escolheu o Homem");
		}
		else{
			if(Q1==1 && Q2==1 && Q3==1 && Q4==1 && Q5>1 && Q6>1) {
			printf("Você escolheu o Macaco");
			}
			else{
				if(Q1==1 && Q2>1 && Q3==1 && Q4==1 && Q5==1 && Q6>1){
				printf("Você escolheu o Morcego");
				}
				else{
					if(Q1==1 && Q2>1 && Q3==1 && Q4>1 && Q5>1 && Q6==1){
					printf("Você escolheu o Baleia");
					}
					else{
						if(Q1>1 && Q2>1 && Q3==1 && Q4==1 && Q5==1 && Q6>1){
						printf("Você escolheu o Avestruz");
						}
						else{
							if(Q1>1 && Q2>1 && Q3==1 && Q4>1 && Q5>1 && Q6==1){
							printf("Você escolheu o Pinguim");
							}
							else{
								if(Q1>1 && Q2>1 && Q3==1 && Q4==1 && Q5==1 && Q6>1){
								printf("Você escolheu o Pato");
								}
								else{
									if(Q1>1 && Q2>1 && Q3==1 && Q4>1 && Q5==1 && Q6>1){
									printf("Você escolheu a Águia");
									}
									else{
										if(Q1>1 && Q2==1 && Q3==1 && Q4==1 && Q5>1 && Q6==1){
										printf("Você escolheu a Tartaruga");
										}
										else{
											if(Q1>1 && Q2==1 && Q3==1 && Q4>1 && Q5>1 && Q6==1){
											printf("Você escolheu o Crocodilo");
											}
											else{
												if(Q1>1 && Q2>1 && Q3==1 && Q4>1 && Q5>1 && Q6==1){
												printf("Você escolheu a Cobra");
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}
printf("\n Deseja jogar novamente?");
printf("\n Digite 1-para sim ou qualquer outro número para não \n");
scanf("%d",&N1);
}
}
