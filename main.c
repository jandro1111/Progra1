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
    dat=data;
    input(dat,argv,argc);
    for (int i=0, a = 1; i < data[0]; ++i, a+=2){ // Imprime las opciones y el valor que poseen.
        
            printf("Opcion %d:\n\tClave:%s\n\tValor:%s\n", i+1, argv[a], argv[a+1]); 
     } 
    
    for (int u=0; u < data[1]; ++u){
         printf("Parametro %d: %s\n", u+1, argv[data[0]*2+u+1]); //Muestro por  pantalla los parametros
     }
    return (EXIT_SUCCESS);
}

