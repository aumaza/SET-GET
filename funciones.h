#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

typedef struct
{
    int a;
    char b[20];

}eDato;


int eDato_get_a(eDato* dato);
int eDato_get_b(eDato* dato);
int eDato_set_a (eDato* dato, int valor);
int eDato_set_b(eDato* dato, char* valor);







#endif // FUNCIONES_H_INCLUDED
