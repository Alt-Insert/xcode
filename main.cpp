//
//  main.cpp
//  Varianza
//
//  Created by Matias on 31/10/16.
//  Copyright (c) 2016 Matias. All rights reserved.
//
#include <math.h>
#include <ctype.h>
#include <iostream>

int main(int argc, const char * argv[]){
int *sumatoria;// se declara un puntero



    float media= 0;
    int cantidad;
    float varianza= 0;
    
    system("color 0c");
    
    std::cout<<"\t===========PROGRAMA PARA CALCULAR LA MEDIA ARITMETICA==========\n";
    std::cout<<"\nCuantos numeros son? ";
    std::cin>>cantidad;
    
    sumatoria = new int[cantidad];// se hace un arreglo solo con los valores necesarios
    
    for(int i= 0;i < cantidad;i++)
    {
        std::cout<<"Escribe el valor "<<i+1<<":";//se pide los datos comenzando desde el primero
        std::cin>>sumatoria[i];
    }
    
    for(int e = 0;e < cantidad;e++)
    {
        media = media + sumatoria[e];//se hace la sumatoria y se guarda los valores
    }
    
    media = media / cantidad;
    
    //system("cls");
    
    std::cout<<"La Media es: ";
    std::cout<<media<<std::endl;
    
    for(int k = 0;k < cantidad;k++)
    {
        varianza = varianza + (((sumatoria[k])-(media))*((sumatoria[k])-(media)));
        /*se hace la sumatoria del cuadrado de sumatoria - media*/
    }
    varianza = varianza / cantidad;//se hace la divicion de la suma anterior con la cantidad
    std::cout<<"la varianza es: ";
    std::cout<<varianza<<std::endl;
    std::cout<<"La desviacion estandar es +/-: ";
    std::cout<<sqrt(varianza);//muestra la raiz cuadrada de la varianza para sacar la desviacion estandar
    
    delete[] sumatoria;//se ace un break al puntero dina
    
    //system("PAUSE>nul");
    return EXIT_SUCCESS;
}