#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Libro {
    char *titulo;
    int anioDePublicacion;
    struct Libro *next;
};
void buscar(struct Libro*, int); // Declaración de funciones
struct Libro* nuevo_elemento(int, struct Libro*);

int main( int argc, char *argv[]){

    struct Libro *lista = NULL; // este serà nuestro nodo punta, por asi decirlo
    int aux, numero;
    buscar(lista, aux);
    lista=nuevo_elemento(numero,lista); // Claro que previamnete habria que solicitar los datos a guardar en el elemento.
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

// función que crea un nuevo, elemento, tiene errores pero no se muy bien de donde obtendria el titulo , el siguiente elelmento
struct Libro* nuevo_elemento(int numero, struct Libro *lista) {

    struct Libro* elemento_actual = lista;
    struct Libro *nuevo_elemento;
    while (elemento_actual != NULL && elemento_actual->next != NULL)
    {
        elemento_actual = elemento_actual->next;
    }

  nuevo_elemento = (struct Libro *) malloc(sizeof(struct Libro));
  nuevo_elemento-> titulo ; // aqui la verdad , no supe que hacer para que cada que se cree el titulo donde lo saca
  nuevo_elemento->anioDePublicacion = numero;
  nuevo_elemento->next= NULL;
  if (elemento_actual != NULL)
    elemento_actual->next = nuevo_elemento;
  else
     lista = nuevo_elemento;
return lista;
}
