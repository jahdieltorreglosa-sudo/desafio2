#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include "plataforma.h"
using namespace std;

int main() {
    srand((unsigned)time(nullptr));
    plataforma plat;
    plat.cargar_datos();

    long long iter_count = 0;

    while (true) {
        cout << "\n menu principal \n";
        cout << "1) login\n";
        /*
        cout << "2) reproducir aleatorio\n";
        cout << "3) listar canciones\n";
        cout << "4) mostrar estimacion memoria + iteraciones\n";
        */
        cout << "5) salir\n";
        cout << "escoge una opcion: ";
        int op;
        if (!(cin >> op)) break;

        if (op == 1) {
            cout << "ingresa nickname: ";
            string nick; cin >> nick;
            usuario *u = plat.login(nick);

            if (!u) {
                cout << "usuario no encontrado\n";
                continue;
            }

            cout << "bienvenido "; u->mostrar_info();

            if (u->obtener_tipo() == "premium") {
                usuariopremium *p = dynamic_cast<usuariopremium*>(u);
                if (!p) continue;

                while (true) {
                    cout << "\n===) menu premium (===\n";
                    cout << "1) agregar favorito\n";
                    cout << "2) seguir usuario\n";
                    cout << "3) reproducir favoritos\n";
                    cout << "4) volver\n";
                    cout << "elige: ";
                    int op2; cin >> op2;

                    if (op2 == 1) {
                        cout << "codigo de cancion: ";
                        int id; cin >> id;
                        cout << "agregar favorito\n";
                    } else if (op2 == 2) {
                        cout << "nickname del usuario a seguir: ";
                        string other; cin >> other;
                        cout << "(seguir usuario simulado)\n";
                    } else if (op2 == 3) {
                        cout << "reproduciendo favoritos\n";
                    } else if (op2 == 4) {
                        break;
                    } else {
                        cout << "opcion invalida\n";
                    }
                }
            } else {
                cout << "usuario estandar: opciones limitadas\n";
            }

 }
/*
        } else if (op == 2) {
            cout << "ingresa nickname para reproducir: ";
            string nick; cin >> nick;
            cout << "reproduccion\n";

        } else if (op == 3) {
            cout << "listado de canciones\n";

        } else if (op == 4) {
            cout << fixed << setprecision(0);
            cout << "iteraciones: " << iter_count << "\n";
            cout << "memoria estimada (bytes): " << plat.estimar_memoria() << "\n";

        } else if (op == 5) {
            cout << "saliendo\n";
            break;
        } else {
            cout << "opcion no valida\n";
        }
    }

    return 0;
}
*/
}
