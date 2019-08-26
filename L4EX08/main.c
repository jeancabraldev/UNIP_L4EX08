#include <stdio.h>
#include <stdlib.h>

int main()
{
    float cargaMaximaCaminhao, cargaVolume, totalCargaVolume;
    int count;
    char resp = 's';

    totalCargaVolume = 0;
    count = 1;

    printf("\nQual e o peso maximo de carga suportada pelo caminhao?\n\n");
    scanf("%f", &cargaMaximaCaminhao);

    while(resp == 's'){
        printf("\nInforme o peso da carga %d: ", count);
        count++;
        scanf("%f", &cargaVolume);
        totalCargaVolume = totalCargaVolume + cargaVolume;
        if(totalCargaVolume > cargaMaximaCaminhao){
            resp = 'n';
            printf("\nPeso da carga excedido em %.2f kilos para esse caminhao\n", (totalCargaVolume - cargaMaximaCaminhao));
            printf("\nRetire a ultima carga do caminhao\n");
        } else {
            printf("\nNova carga (s/n): ");
            scanf(" %c", &resp);
        }
    }
    return 0;
}
