#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int A,B,C;
	
	printf("\n Digite um valor para A: ");
	scanf("%d", &A);
	
	system("CLS");
	
	printf("\n Digite um valor para B: ");
	scanf("%d", &B);
	
	system("CLS");
	
	printf("\n Digite um valor para C: ");
	scanf("%d", &C);
	
	system("CLS");
	
	if(A<B && A<C) {
		if(B<C) {
			printf("%d - %d - %d", A , B , C);}
		else {
			printf("%d - %d - %d", A , C , B);}
		}
	else {
		if(B<A && B<C) {
			if (A<C) {
				printf("%d - %d - %d", B , A , C);}
			else{
				printf("%d - %d - %d", B , C , A);}
		}
		else {
			if(A<B) {
				printf("%d - %d - %d", C , A , B);}
			else {
				printf("%d - %d - %d", C , B , A);}
		}
		}		
	
			
		return (0);
	}
	
