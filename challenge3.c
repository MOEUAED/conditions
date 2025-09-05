#include<stdio.h>

int main(){
	
	int b , a , r ;
	
	printf("entrer le premier nombre : ");
    scanf("%d",&b);
    
    printf("entrer le deuxieme nombre : ");
    scanf("%d", &a);
    
    if (a == b){
    	r = 3 * (a+b);
    	printf("Resultat %d", r);
	}else {
		r = a + b ;
		printf("Resultat %d", r);
	}
    	
	return 0 ;
}
