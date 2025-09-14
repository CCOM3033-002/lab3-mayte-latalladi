/*
Asignación #1: Tres números aleatorios
Nombre: Mayté A. Latalladi Oliveras
Número de estudiante: 801-22-7658
Colaboraciones: 
    Usé las presentaciones de la clase
*/

#include <iostream> 
#include <cstdlib> 

using namespace std;

//Se crea la función main 
int main (){


    srand(time(0));

    //Definimos las variables donde vamos a almacenar los numeros aleatorios 
    int numeroAleatorio1 = rand() % ( 100 - 0 + 1 ) + 0;
    int numeroAleatorio2 = rand() % ( 100 - 0 + 1 ) + 0;
    int numeroAleatorio3 = rand() % ( 100 - 0 + 1 ) + 0;

    //Desplegamos los números aleatorios 
    std::cout << "Números aleatorios generados: " << numeroAleatorio1 << ", " << numeroAleatorio2 << ", " << numeroAleatorio3 <<endl;
    
    //Definimos las variables donde vamos a almacenar los números en orden 
    int primero, segundo, tercero;

        //Encontramos el número menor
        if (numeroAleatorio1 <= numeroAleatorio2 && numeroAleatorio1 <= numeroAleatorio3) {
            primero = numeroAleatorio1;
        }  else if (numeroAleatorio2 <= numeroAleatorio1 && numeroAleatorio2 <= numeroAleatorio3) {
                primero = numeroAleatorio2;
        }  else {
                primero = numeroAleatorio3;
        }

        //Encontramos el número mayor   
        if (numeroAleatorio1 >= numeroAleatorio2 && numeroAleatorio1 >= numeroAleatorio3){
            tercero = numeroAleatorio1;
        }  else if (numeroAleatorio2 >= numeroAleatorio1 && numeroAleatorio2 >= numeroAleatorio3) {
                tercero = numeroAleatorio2;
        }  else {
                tercero = numeroAleatorio3;
        }

        //Encontramos el número del medio por eliminación  
        if ((numeroAleatorio1 != primero) && (numeroAleatorio1 != tercero)) {
            segundo = numeroAleatorio1;
        }  else if ((numeroAleatorio2 != primero) && (numeroAleatorio2 != tercero)) {
                segundo = numeroAleatorio2;
        }  else {
                segundo = numeroAleatorio3;
        }

        //Desplegamos los números en orden.  
        std::cout << "Números ordenados: " << primero << ", " << segundo << ", " << tercero << endl; 


}

