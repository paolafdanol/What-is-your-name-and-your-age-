#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	char a[20];
	int b;
	printf("¿Cual es tu nombre?\n");
	scanf("%s",&a);
	printf("¿Cual es tu edad?\n");
	scanf("%d", &b);
	printf("Nombre:%s\n", a);
	printf("Edad:%d\n", b);	
	return 0;
}
