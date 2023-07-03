#include <stdio.h>
#include "ingreso.h"
#include "torneo.h"
#include "resultados.h"

int main() {
    char equipos[100][100];
    int numEquipos = 0;
    int opc=0;
    printf("Bienvenido \nDeseas ingresar nuevos equipos(1-2)\n1.Si\n2.No\n");
    scanf("%d", &opc);
    if (opc == 1)
    {
        numEquipos = ingresoEquipos(equipos);
    }
    
    generarResultados(numEquipos, equipos);

    calcularPuntos(numEquipos, equipos);
    
    return 0;
}
