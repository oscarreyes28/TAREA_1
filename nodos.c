#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Libro {
    char *titulo;
    int anioDePublicacion;
    struct Libro *next;
};
void buscar(struct Libro*, int);

int main( int argc, char *argv[]){

    struct Libro *lista = NULL;
    int aux;
    buscar(lista, aux);
    return 0;
}

void buscar(struct Libro *lista, int aux) // Función que buscará a un elemento de la lsita ligada, solo funcionará cuando ya tengamos una lista previamente hecah
{
    while (lista != NULL){
        if (lista->anioDePublicacion == aux){
        printf("Se encontro el elemento \n");
        return;
        }
    lista = lista->next;}
    printf("No se encontro el elemento!!");
}
