#include <stdio.h>

int main(){
	
	if(fork()==0){
		printf("primer if\n");
	}
	if(fork()==0){
		printf("segundo if\n");
	}
	else
		printf("esto es el else\n");
}
