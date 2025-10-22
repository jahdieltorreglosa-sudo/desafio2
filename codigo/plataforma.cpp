#include "plataforma.h"
#include <iostream>
using namespace std;

plataforma::plataforma() {
    num_usuarios = 0;
    num_canciones = 0;
    num_anuncios = 0;
    num_artistas = 0;
}

void plataforma::cargar_datos() {
    cout << "datos de prueba cargados\n";
}

usuario* plataforma::login(const string &nick) {
    cout << "login\n";
    return nullptr;
}

void plataforma::reproducir_aleatorio(usuario *u, int k) {
    cout << "reproduccion\n";
}

size_t plataforma::estimar_memoria() {
    return 0;
}
