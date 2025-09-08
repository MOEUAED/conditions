#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
int main() { 
	int n ; 
	srand(time(NULL)); 
	n = rand()%7 + 1; 
	switch(n){ 
	case 1 : 
		printf("le jour choisis est : Lundi. "); 
		break ; 
	case 2 : 
		printf("le jour choisis est : Mardi. "); 
		break ; 
	case 3 : 
		printf("le jour choisis est : Mercredi. "); 
		break ; 
	case 4 : 
		printf("le jour choisis est : Jeudi. "); 
		break ; 
	case 5 : 
		printf("le jour choisis est : Vendredi. "); 
		break ; 
	case 6 : 
		printf("le jour choisis est : Samedi. "); 
		break ; 
	case 7 : 
		printf("le jour choisis est : dimanche. "); 
		break ; } 
		
	return 0;
		}
