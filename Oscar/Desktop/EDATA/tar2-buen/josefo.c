#include <stdio.h>
#include <stdlib.h>

struct fulano
{
    int num;
    struct fulano *next;
};

void crear(struct fulano **);
void mostrar(struct fulano *);
int vive(struct fulano **, int);

int main()
{
    struct fulano *lista = NULL;
    int sobrevive, skip;

    crear(&lista);
    printf("Las personas en el circulo son:\n");
    mostrar(lista);
    printf("Ingrese el numero de saltos: ");
    scanf("%d", &skip);
    sobrevive = vive(&lista, skip);
    printf("La persona que se salva es : %d\n", sobrevive);
    free(lista);

    return 0;
}

int vive(struct fulano **lista, int k)
{
    struct fulano *p, *q;
    int i;

    q = p = *lista;
    while (p->next != p)
    {
        for (i = 0; i < k - 1; i++)
        {
            q = p;
            p = p->next;
        }
        q->next = p->next;
        printf("%d Ya se murio.\n", p->num);
        free(p);
        p = q->next;
    }
    *lista = p;

    return (p->num);
}

void crear (struct fulano **lista)
{
    struct fulano *inter, *atras;
    int a, ch;

    do
    {
        printf("Ingrese un numero que representara a una persona: ");
        scanf("%d", &a);
        inter = (struct fulano *)malloc(sizeof(struct fulano));
        inter->num = a;
        inter->next = NULL;
        if (*lista == NULL)
        {
            *lista = inter;
        }
        else
        {
            atras->next = inter;
        }
        atras = inter;
        printf("Quiere agregar otra persona al circulo (si si teclee '1'/si no teclee'0')? ");
        scanf("%d", &ch);
    } while (ch != 0);
    atras->next = *lista;
}

void mostrar(struct fulano *lista)
{
    struct fulano *inter;

    inter = lista;
    printf("%d   ", inter->num);
    inter = inter->next;
    while (lista != inter)
    {
        printf("%d   ", inter->num);
        inter = inter->next;
    }
    printf("\n");
}
