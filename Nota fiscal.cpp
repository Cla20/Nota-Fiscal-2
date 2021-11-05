#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	char p1[18], p2[18], p3[18], p4[18];
	char p5[18], p6[18], p7[18], p8[18];
	float v_p1, v_p2, v_p3, v_p4;
	float v_p5, v_p6, v_p7, v_p8;
	int q_p1, q_p2, q_p3, q_p4, q_p5, q_p6, q_p7, q_p8;
	int cod1 = 450, cod2 = 451, cod3 = 452, cod4 = 453;
	int cod5 = 454, cod6 = 455, cod7 = 456, cod8 = 457;
	
	float total;
	
	printf("Criador de nota fiscal\n \n ");
	printf( "Produto: ");
	gets(p1);
	printf("Valor do produto: ");
	scanf("%f", &v_p1);
	printf("Quantidade de produtos: ");
	scanf("%d", &q_p1);
	fflush(stdin);
	
	printf( "\n Produto: ");
	gets(p2);
	printf("Valor do produto: ");
	scanf("%f", &v_p2);
	printf("Quantidade de produtos: ");
	scanf("%d", &q_p2);
	fflush(stdin);
	
	printf( "\n Produto: ");
	gets(p3);
	printf("Valor do produto: ");
	scanf("%f", &v_p3);
	printf("Quantidade de produtos: ");
	scanf("%d", &q_p3);
	fflush(stdin);
	
	printf( "\n Produto: ");
	gets(p4);
	printf("Valor do produto: ");
	scanf("%f", &v_p4);
	printf("Quantidade de produtos: ");
	scanf("%d", &q_p4);
	fflush(stdin);

	printf( "\n Produto: ");
	gets(p5);
	printf("Valor do produto: ");
	scanf("%f", &v_p5);
	printf("Quantidade de produtos: ");
	scanf("%d", &q_p5);
	fflush(stdin);
	
	printf( "\n Produto: ");
	gets(p6);
	printf("Valor do produto: ");
	scanf("%f", &v_p6);
	printf("Quantidade de produtos: ");
	scanf("%d", &q_p6);
	fflush(stdin);
	
	printf( "\n Produto: ");
	gets(p7);
	printf("Valor do produto: ");
	scanf("%f", &v_p7);
	printf("Quantidade de produtos: ");
	scanf("%d", &q_p7);
	fflush(stdin);
	
	printf( "\n Produto: ");
	gets(p8);
	printf("Valor do produto: ");
	scanf("%f", &v_p8);
	printf("Quantidade de produtos: ");
	scanf("%d", &q_p8);
	fflush(stdin);
	
	total = v_p1*q_p1 + v_p2*q_p2 + v_p3*q_p3 + v_p4*q_p4 + v_p5*q_p5 + v_p6*q_p6 + v_p7*q_p7 + v_p8*q_p8;
	
	printf(" | %-7s | %-7s | %-15s | %-10s  | %-10s |\n", "Código", "Quant.", "Discriminação", "P.Unitário", "Preço Total");
	printf(" | %-7d | %-7d | %-15s | R$ %8.2f | R$ %8.2f |\n", cod1, q_p1, p1, v_p1, v_p1*q_p1);
	printf(" | %-7d | %-7d | %-15s | R$ %8.2f | R$ %8.2f |\n", cod2, q_p2, p2, v_p2, v_p2*q_p2);
	printf(" | %-7d | %-7d | %-15s | R$ %8.2f | R$ %8.2f |\n", cod3, q_p3, p3, v_p3, v_p3*q_p3);
	printf(" | %-7d | %-7d | %-15s | R$ %8.2f | R$ %8.2f |\n", cod4, q_p4, p4, v_p4, v_p4*q_p4);
	printf(" | %-7d | %-7d | %-15s | R$ %8.2f | R$ %8.2f |\n", cod5, q_p5, p5, v_p5, v_p5*q_p5);
	printf(" | %-7d | %-7d | %-15s | R$ %8.2f | R$ %8.2f |\n", cod6, q_p6, p6, v_p6, v_p6*q_p6);
	printf(" | %-7d | %-7d | %-15s | R$ %8.2f | R$ %8.2f |\n", cod7, q_p7, p7, v_p7, v_p7*q_p7);
	printf(" | %-7d | %-7d | %-15s | R$ %8.2f | R$ %8.2f |\n", cod8, q_p8, p8, v_p8, v_p8*q_p8);
	printf(" | %-7s | %-7s | %-15s | %-11s | R$ %8.2f |\n", "", "", "",  "Total", total);
	
	return 0;
	
	
}
