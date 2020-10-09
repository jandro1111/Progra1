/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include"input.h"
//argc=1+opciones+parametros
void input(int *data, char *argv[],int argc){        //busca el input del usuario y lo escribe en el arreglo correspondiente, devuelve 1 si lo introducido no es valido y 0 si esta bien
    int opini =1;//la primer palabra,con indice 0, es el nombre del programa, y esta no se cuenta
    for(opini=1;opini<argc;++opini)
    if(argv[opini][0]=='-'){//si hay opcion 
        data[0]++;
    }else{
        if(argv[opini][0]!='-'){//si no encuentra un - adelante
            if((argv[opini-1][0]=='-')&&((opini-1)>0)){//se fija si el anterior string si lo tenia, en cuyo caso el dato es el valor de la opcion
                //es el valor asociado a la opcion
            }else{
                data[1]++;//es un parametro
            }
        }
    }
    
    
}
