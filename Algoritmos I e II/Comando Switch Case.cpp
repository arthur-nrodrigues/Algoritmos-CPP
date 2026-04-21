#include <iostream>
using namespace std;

int main(){

    int n1;
    char opc;
    inicio:

    system ("cls");

    cout << "Menu: [1] Jogar, [2] Configuracoes, [3] Carregar save, [4] Sair. " << endl;
    cout << "Selecione a opcao que deseja: ";
    cin >> n1;

    switch (n1){ //Cria (CASES) dentro de um programa.
        case 1:
            cout <<"Iniciando o jogo...\n";
            break;
        case 2:
            cout <<"Abrindo configuracoes...\n";
            break;
        case 3:
            cout <<"Carregando save...\n";
            break;
        case 4:
            cout <<"Saindo do jogo...\n";
            break;
        default:
            inicio1:

            system ("cls");

            cout <<"Opcao invalida!" << endl;
            cout << "Deseja selecionar a opcao novamente? [s,n]: ";
            cin >> opc;    
                if(opc == 's' or opc == 'S'){
                    goto inicio;
                }else if(opc == 'n' or opc == 'N'){
                    cout << "fechando o programa" << endl;
                }else{
                    goto inicio1;
                }
                          
    }

    system("pause");
    return 0;
}