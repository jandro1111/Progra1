/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: jandro1111
 *
 * Created on 7 de octubre de 2020, 21:34
 */

#include <stdio.h>
#include <stdlib.h>
#include"input.h"
#define NXDAT 2
/*
 * \
 */
int main(int argc, char* argv[]) {
    int data[]={0,0};  //en el primer lugar guardo la cantidad de opciones
    int *dat;
    int i, b;
    dat=data;
    input(dat,argv,argc);
    for(i=1, b=1;i<=data[0];++i){//imprimo primero las opciones
        printf("Opcion %d: Clave: %s Valor: %s \n", i, argv[b], argv[b+1]);
        b=b+NXDAT;
    }//b ya queda apuntando a los parametros, x eso no la inicializo
    for(i=1;i<=data[1];++i,++b){//imprimo los parametros
        printf("Parametro %d: %s \n", i, argv[b]);
    }
    return (EXIT_SUCCESS);
}

