#include<stdio.h>
#include<locale.h>
#include<math.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int num;
    float r, q, e;

    printf("Informe um numero: \n");
    scanf("%d", &num);
	while (num < 0)
	{
    	printf("Informe um numero: \n");
    	scanf("%d", &num);
	}
	e = pow(num,num);
	r=sqrt(num);
	printf("%d^%d=%.2f \n", num,num,e);
	printf("A raiz de %d e: %.2f \n", num,r);
    return 0;
}