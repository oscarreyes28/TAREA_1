#include<stdio.h>

int sumar (int elementos[],int n) {
    if (n < 0) {//caso base
     return 0;
   } else{
     //Recursiòn, hace un llamdo a la función sumar para hacer la suma de los elementos
     return elementos[n] + sumar(elementos, n-1);
    }


}

int main( int argc, char *argv[]){
int elementos [10]= {1,2,3,4,5,6,7,8,9,10};
int resultado = sumar(elementos,9); // LLamado a la función sumar con los parametros para que funcione
printf(" \nLa suma de los elementos es %d",resultado);
return 0;
}
