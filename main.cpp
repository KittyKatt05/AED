#include <iostream>
#include <list>
#include <queue>
#include "classes/Manutencao.h"
#include "classes/Aviao.h"
#include "classes/Voo.h"
#include "classes/Data.h"
#include "classes/Passageiro.h"
#include "classes/Bagagem.h"
#include "classes/Listagens.h"
#include <string>

void showSubMenu1();

void subMenuCreate(Listagens listagens);

void subMenuRead(Listagens listagens);

void subMenuUpdate(Listagens listagens);

void subMenuDelete(Listagens listagens);

bool respostaExit();

using namespace std;
int main() {

    //lista com 2/3 passageiros, cada um tem que ter uma bagagem, 2 com true e 1 false, imprimir os atributos do voo (data, nº, hora de partida, destino, duração, origem)
    std::cout << "Hello, World!" << std::endl;

    Listagens listas;

    char input;
    bool sair = true;
    do{
        showSubMenu1();
        cin >> input;

        switch(input){
            case '1':
                subMenuCreate(listas);
                break;
            case '2':
                subMenuRead(listas);
                break;
            case '3':
                subMenuUpdate(listas);
                break;
            case '4':
                subMenuDelete(listas);
                break;
            default:
                cout << endl;
        }

        if(input == '0'){
            sair = respostaExit();
        }

    }while(input!='0' and sair);


    return 0;
}



void showSubMenu1(){

    cout << "1. Create" << endl;
    cout << "2. Read" << endl;
    cout << "3. Update" << endl;
    cout << "4. Delete" << endl << endl;
    cout << "0. Exit" << endl;
}

void showSubMenuCRUD(){
    cout << "1. Voo" << endl  << endl;
    cout << "0. Exit" << endl;
}

bool respostaExit(){
    char resposta;
    cout << "Deseja Realmente sair? S-Sim/ N-Nao" << endl;
    cin >> resposta;
    if(resposta == 'S' or resposta == 's' or resposta == '1' or resposta == 'Y' or resposta == 'y'){
        return false;
    } else {
        return true;
    }
}

void subMenuCreate(Listagens listas){
    char input;
    do{
        showSubMenuCRUD();
        cin >> input;
        switch (input) {
            case '1':
                createVoo(listas);
                break;;
        }
    } while(input != '0');
}



// ---------------------------------------------- READ -----------------------------------------------------------------

void subMenuRead(Listagens listas){
    char input;
    do{
        showSubMenuCRUD();
        cin >> input;
        switch (input) {
            case '1':
                listas.airportDraw();
                break;
            case '2':
                listas.drawAvioes();
                break;
            case '3':
                listas.drawVoos();
                break;
        }
    } while(input != '0');
}


// -------------------------------------------- UPDATE -----------------------------------------------------------------

void subMenuUpdate(Listagens lista){
    char input;
    do{
        showSubMenuCRUD();
        cin >> input;
    } while(input != '0');
}


// -------------------------------------------- DELETE -----------------------------------------------------------------

void subMenuDelete(Listagens lista){
    char input;
    do{
        showSubMenuCRUD();
        cin >> input;
    } while(input != '0');
}

void createVoo(Listagens lista){
    lista.getListaVoos().front().
}
