#include <stdio.h>
#include <string.h>

int main() 
{

	char resp[5], inicio;
	int t = 0;
	int i,j;
		
	for(i=0;i<1;i++)
	{	
		printf("\nAssassinato do Sr.Mostarda, responda para o detetive as seguintes perguntas:");
		printf("\n==============================================================================\n");
			printf("\nVoce telefonou para a vitima? [s/n] R: ");
			scanf("%s", &resp[i++]);
			printf("\nVoce esteve no local do crime? [s/n] R: ");
			scanf("%s", &resp[i++]);
			printf("\nVoce mora perto da vitima? [s/n] R: ");
			scanf("%s", &resp[i++]);
			printf("\nVoce devia para a vitima? [s/n] R: ");
			scanf("%s", &resp[i++]);
			printf("\nVoce ja trabalhou com a vitima? [s/n] R: ");
			scanf("%s", &resp[i++]);
				printf("\n==============================================================================\n");
			printf("\n\n");		
			
		for(j=0;j<5;j++)
		{
			if(resp[j] == 's')
			{
				t += 1;
			} else if(resp[j] == 'n')
			{
				t += 0;
			}
		}	
	}
		printf("\n Existem 5 niveis para os suspeitos, abaixo o resultado do seu nivel:\n");
			printf("\n==============================================================================\n");
	if(t == 2)
	{
		printf("\nVoce e uma pessoa suspeita. suspeito de nivel: %d, pedimos que não saia da cidade! ",t);
	} else if(t == 3 || t == 4) {
		printf("\nVoce foi cumplice de assassinato. suspeito de nivel: %d, gostaria de entregar o assassino(a)?) ",t);
	} else if(t == 5){
		printf("\nVoce e o assassino(a)). suspeito de nivel: %d, tem o direito de permanecer calado...! ",t);
	} else {
		printf("\nVoce e inocente. suspeito de nivel: %d, obrigado pelo seu tempo! ",t);
	}
	printf("\n");
		printf("\n==============================================================================\n");
	
	getch();
	return 0;
}
