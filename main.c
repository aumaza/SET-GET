#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"


int main()
{
   eDato dato={1, "Juan"};
   eDato* d;

   d=&dato;

   eDato_set_a(d,1800);

   eDato_set_b(d, "HOLA");

   printf("%d--%s", eDato_get_a(d), eDato_get_b(d));

    return 0;
}

