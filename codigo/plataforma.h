#ifndef PLATAFORMA_H
#define PLATAFORMA_H
#include "clases.h"

class plataforma {
public:
    usuario **usuarios;
    int num_usuarios;

    cancion **canciones;
    int num_canciones;

    publicidad **anuncios;
    int num_anuncios;

    artista **artistas;
    int num_artistas;

    plataforma();
    void cargar_datos();
    usuario* login(const string &nick);
    void reproducir_aleatorio(usuario *u, int k = 5);
    size_t estimar_memoria();
};
#endif // PLATAFORMA_H
