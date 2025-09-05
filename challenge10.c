#include<stdio.h>

int main(){
	int d, m , y;
	
	do{
	printf("entrer le jour en format: JJ \n");
	scanf("%d",&d);		
	}while(d < 0 || d> 31);
		do{
	printf("entrer le mois en format: MM \n");
	scanf("%d",&m);		
	}while(m < 1 || m> 12);
		do{
	printf("entrer le jour en format: AAAA \n");
	scanf("%d",&y);		
	}while(y > 9999  );
	
		
	printf("%02d-",d);
	switch(m){
	
	case 1 :
		printf("Janvier-",m);
		break;	
	case 2 :
		printf("Fevrier-",m);
		break;	
	case 3 :
		printf("Mars-",m);
		break;	
	case 4 :
		printf("Avril-",m);
		break;	
	case 5 :
		printf("Mai-",m);
		break;	
	case 6 :
		printf("Juin-",m);
		break;	
	case 7 :
		printf("Juillet-",m);
		break;	
	case 8 :
		printf("Aout-",m);
		break;	
	case 9 :
		printf("Septembre-",m);
		break;	
	case 10 :
		printf("Octobre-",m);
		break;	
	case 11 :
		printf("Novembre-",m);
		break;	
	case 12 :
		printf("Decembre-",m);
		break;	
	
	default :
		printf("mois invalid.");
		return 0 ;}
		printf ("%d",y);
	
	return 0;
}
