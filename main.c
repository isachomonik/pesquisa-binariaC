#include <stdio.h>
int pesquisa_binaria(int lista[], int tamanho, int item)
    {

        int baixo = 0;
        int alto = tamanho - 1;

        do
        {
            int meio = (baixo + alto) / 2;

            if (meio % 2 != 1){
                meio--;
            };

            if(lista[meio] == item)
            {

                return meio;
            }
            else if (lista[meio] > item)
            {
                alto = meio - 1;
            }
            else
            {
                baixo = meio + 1;
            };

        }
        while (baixo <= alto);

        return -1;
    };

int main()
{

    int lista[] = {1,3,5,7,9,11};
    int item = 5;
    int tamanho = sizeof(lista) / sizeof(lista[0]) - 1;



    int resultado = pesquisa_binaria(lista, tamanho, item);

    if(resultado > -1 )
    {
        printf("%d", resultado);
    } else
        {
            printf("Numero nao encontrado");
        };


    return 0;
};
