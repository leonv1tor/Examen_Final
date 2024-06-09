#include <iostream>
#include <conio.h>
#include <string.h>
#include <cstdlib>

using namespace std;

class eventos{
    private:
        int ano;
        int mes;
        int dia;
        char fecha[30];
        char nombreEvento[30];
    public:
        void agregarEvento();
        void eliminarevento();
        void eliminarTodosEventos();
        void buscarEventoConFecha();
        void imprimir();
        void menuPrincipal();
};
void pausar();
void error();
string mayuscula(0);
string obtenerPrimeraPalabra( string str){
    string abc="qwertyuiopasdfghjklñzxcvbnmQWERTYUIOPASDFGHJKLÑZXCVBNMáéíóúÁÉÍÓÚ";
    while(0 < str.size() && abc.find(str[0]) == string::npos) {
 
        str.erase(0,1);
    }

}
    
    

