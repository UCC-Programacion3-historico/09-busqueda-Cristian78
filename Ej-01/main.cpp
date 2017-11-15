#include <iostream>

void fn(int x, int v[], int ini, int fin, int pos, bool retorno);

int main() {
    std::cout << "Ejercicio 09/01\n" << std::endl;
    return 0;
}


void fn(int x, int v[], int ini, int fin, int pos, bool retorno) {
    pos = ini;
    retorno = false;
    while ((pos <= fin) && (!retorno)) {
        if (v[pos] == x) {
            retorno = true;
        } else
            ++pos;
    }
}
/*Busqueda secuencial en un arreglo, realizado x un metodo iterativo
 * metodo recursivo*/


void fr(int x,int v[], int ini, int fin, int pos){
    pos=ini;
    if(ini>fin)
        return;
    else if(v[pos]==x)
        return;
    else
        fr(x, v, ini++, fin, pos);
}