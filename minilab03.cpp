/*
Mayté A. Latalladi Oliveras
801-22-7658
*/

#include <iostream> 
#include <cstdlib> 

using namespace std;

int main (){


    srand(time(0));

    int numeroAleatorio1 = rand() % ( 100 - 0 + 1 ) + 0;
    int numeroAleatorio2 = rand() % ( 100 - 0 + 1 ) + 0;
    int numeroAleatorio3 = rand() % ( 100 - 0 + 1 ) + 0;


    std::cout << "Números aleatorios generados: " << numeroAleatorio1 << ", " << numeroAleatorio2 << ", " << numeroAleatorio3 <<endl;
    
    if (numeroAleatorio1 >= numeroAleatorio2 && numeroAleatorio3)
        std::cout << "Números ordenados: " << numeroAleatorio2 << ", " << numeroAleatorio3 << ", " << numeroAleatorio1 << endl; 
    else if (numeroAleatorio2 >= numeroAleatorio1 && numeroAleatorio3)
        std::cout << "Números ordenados: " << numeroAleatorio1 << ", " << numeroAleatorio3 << ", " << numeroAleatorio2 << endl; 
    else if (numeroAleatorio3 >= numeroAleatorio2 && numeroAleatorio1)
        std::cout << "Números ordenados: " << numeroAleatorio2 << ", " << numeroAleatorio3 << ", " << numeroAleatorio3 << endl; 
    else if (numeroAleatorio1 <= numeroAleatorio2 && numeroAleatorio3)
        std::cout << "Números ordenados: " << numeroAleatorio1 << ", " << numeroAleatorio2 << ", " << numeroAleatorio3 << endl; 
    else if (numeroAleatorio2 <= numeroAleatorio1 && numeroAleatorio3)
        std::cout << "Números ordenados: " << numeroAleatorio2 << ", " << numeroAleatorio1 << ", " << numeroAleatorio3 << endl; 
    else if (numeroAleatorio3 <= numeroAleatorio1 && numeroAleatorio2)
        std::cout << "Números ordenados: " << numeroAleatorio3 << ", " << numeroAleatorio2 << ", " << numeroAleatorio1 << endl; 
}





