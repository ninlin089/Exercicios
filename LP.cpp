#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<locale.h>
main(){
setlocale(LC_ALL, "Portuguese");
int Q1,Q2,Q3,Q4,Q5,Q6,i,N1;


printf("\n Seja Bem Vindo Ao Jogo dos Animais");
printf("\n Deseja jogar?");
printf("\n Digite 1-para sim ou qualquer outro n�mero para n�o \n");
scanf("%d",&N1);
while(N1==1){
printf("\n Escolha um dentre os animais que vir�o a seguir:");
printf("\n Le�o     ");
printf("\n Cavalo   ");
printf("\n Homem    ");
printf("\n Macaco   ");
printf("\n Mercego  ");
printf("\n Baleia   ");
printf("\n Avestruz ");
printf("\n Pinguim  ");
printf("\n Pato     ");
printf("\n �guia    ");
printf("\n Tartaruga");
printf("\n Crocodilo");
printf("\n Cobra    ");
printf("\n ");
printf("\n ");

printf("\n O animal que voc� escolheu � Mam�fero?");
printf("\n Digite 1-para sim e outro n�mero para n�o \n");
scanf("%d",&Q1);
printf("\n O animal que voc� escolheu � Quadrupede?");
printf("\n Digite 1-para sim e outro n�mero para n�o \n");
scanf("%d",&Q2);
printf("\n O animal que voc� escolheu � Carn�voro?");
printf("\n Digite 1-para sim e outro n�mero para n�o \n");
scanf("%d",&Q3);
printf("\n O animal que voc� escolheu � Herb�voro?");
printf("\n Digite 1-para sim e outro n�mero para n�o \n");
scanf("%d",&Q4);
printf("\n O animal que voc� escolheu Possui Asas?");
printf("\n Digite 1-para sim e outro n�mero para n�o \n");
scanf("%d",&Q5);
printf("\n O animal que voc� escolheu � Aqu�tico?");
printf("\n Digite 1-para sim e outro n�mero para n�o \n");
scanf("%d",&Q6);

if(Q1==1 && Q2==1 && Q3==1 && Q4>1 && Q5>1 && Q6>1){
printf("Voc� escolheu o Le�o");
}
else{
	if(Q1==1 && Q2==1 && Q3>1 && Q4==1 && Q5>1 && Q6>1){
	printf("Voc� escolheu o Cavalo");
	}
	else{
		if(Q1==1 && Q2>1 && Q3==1 && Q4==1 && Q5>1 && Q6>1){
		printf("Voc� escolheu o Homem");
		}
		else{
			if(Q1==1 && Q2==1 && Q3==1 && Q4==1 && Q5>1 && Q6>1) {
			printf("Voc� escolheu o Macaco");
			}
			else{
				if(Q1==1 && Q2>1 && Q3==1 && Q4==1 && Q5==1 && Q6>1){
				printf("Voc� escolheu o Morcego");
				}
				else{
					if(Q1==1 && Q2>1 && Q3==1 && Q4>1 && Q5>1 && Q6==1){
					printf("Voc� escolheu o Baleia");
					}
					else{
						if(Q1>1 && Q2>1 && Q3==1 && Q4==1 && Q5==1 && Q6>1){
						printf("Voc� escolheu o Avestruz");
						}
						else{
							if(Q1>1 && Q2>1 && Q3==1 && Q4>1 && Q5>1 && Q6==1){
							printf("Voc� escolheu o Pinguim");
							}
							else{
								if(Q1>1 && Q2>1 && Q3==1 && Q4==1 && Q5==1 && Q6>1){
								printf("Voc� escolheu o Pato");
								}
								else{
									if(Q1>1 && Q2>1 && Q3==1 && Q4>1 && Q5==1 && Q6>1){
									printf("Voc� escolheu a �guia");
									}
									else{
										if(Q1>1 && Q2==1 && Q3==1 && Q4==1 && Q5>1 && Q6==1){
										printf("Voc� escolheu a Tartaruga");
										}
										else{
											if(Q1>1 && Q2==1 && Q3==1 && Q4>1 && Q5>1 && Q6==1){
											printf("Voc� escolheu o Crocodilo");
											}
											else{
												if(Q1>1 && Q2>1 && Q3==1 && Q4>1 && Q5>1 && Q6==1){
												printf("Voc� escolheu a Cobra");
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
printf("\n Digite 1-para sim ou qualquer outro n�mero para n�o \n");
scanf("%d",&N1);
}
}
