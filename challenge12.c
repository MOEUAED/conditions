#include<stdio.h>

int main (){
	
	int h1 , m1 , s1,h2 , m2 , s2 ;
	do {
	printf("entrer une heure : ");
	scanf("%d",&h1);	
	}while (0>h1 || h1>23);
	do{
	printf("entrer une minute : ");
	scanf("%d",&m1);	
	}while(0>m1 || m1>59);
	do {
	printf("entrer une seconde : ");
	scanf("%d",&s1);		
	}while (0>s1 || s1>59);

	do {
	printf("entrer une deuxieme heure : ");
	scanf("%d",&h2);	
	}while (0>h2 || h2>23);
	do{
	printf("entrer une deuxieme minute : ");
	scanf("%d",&m2);	
	}while(0>m2 || m2>59);
	do {
	printf("entrer une deuxieme seconde : ");
	scanf("%d",&s2);		
	}while (0>s2 || s2>59);

if (h1 == h2 ){
	if (m1==m2){
		if (s1==s2){
			printf("Les deux instants sont identiques .\n");
			printf("%02d:%02d:%02d = %02d:%02d:%02d \n", h1, m1, s1, h2, m2, s2);
		}else if (s1 < s2){
			printf("Le premier instant precede le second .\n");
			printf("%02d:%02d:%02d < %02d:%02d:%02d \n", h1, m1, s1, h2, m2, s2);
		}else{
			printf("Le second instant precede le premier .\n");
			printf("%02d:%02d:%02d > %02d:%02d:%02d \n", h1, m1, s1, h2, m2, s2);	
		}
	}else if (m1<m2){
			printf("Le premier instant precede le second .\n");
			printf("%02d:%02d:%02d < %02d:%02d:%02d \n", h1, m1, s1, h2, m2, s2);
	}else {
			printf("Le second instant precede le premier .\n");
			printf("%02d:%02d:%02d > %02d:%02d:%02d \n", h1, m1, s1, h2, m2, s2);		
	}
}else if (h1<h2){
			printf("Le premier instant precede le second .\n");
			printf("%02d:%02d:%02d < %02d:%02d:%02d \n", h1, m1, s1, h2, m2, s2);
	}else {
			printf("Le second instant precede le premier .\n");
			printf("%02d:%02d:%02d > %02d:%02d:%02d \n", h1, m1, s1, h2, m2, s2);		
	}

	
}
