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
/*
 * 
 */
int main(int argc, char* argv[]) {
    int data[]={0,0};  //en el primer lugar guardo la cantidad de opciones
    int *dat;
    dat=data;
    input(dat,argv,argc);
    printf("%d %d", data[0], data[1]);
   
    return (EXIT_SUCCESS);
}

