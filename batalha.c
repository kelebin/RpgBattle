#include<stdio.h>
#include<stdlib.h>
void criar();
void rpg();
void menu();
void batalha();

char nome[10];

typedef struct inventario{
int pot;

}inv;

typedef struct personagem{
int vida;
int classe;
int dano,eva,def;

}pe;

typedef struct morcego{
int vida;
int danoini;
}mo;

typedef struct esqueleto{
int vida,danoini2,eva,def;
}es;



int main(){
inv inv;
pe 	pe;
mo mo;	
es es;
int ata;
int op;	
	pe.vida 		= 200;
	pe.dano 		= 30;
	pe.def  		= 50;
	pe.eva  		= 20;
	pe.classe 		= 1;
	
	es.vida         =50;
	es.def          =20;
	es.danoini2		=15;
	
	//while((op!=5)&&(op>=1)&&(op<6)){
	
	printf("batalha\nSelecione sua acao : \n1-atacar\n2-skill\n3-item\n4-status inimigo\n5-fugir\n");
	scanf("%d",&op);
	switch (op){
	case 1:{
		ata = ((pe.dano-es.def)*2);
		printf("voce hitou : %d\n",ata );
		es.vida-=ata;
		system("pause");
		printf("vida do inimigo : %d\n",es.vida);
		
		break;
	}
	
	
	
	
	
	}
	
	//}
		
return 0;	
}
















