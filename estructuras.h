// GUARDAR COMO: estructuras.h
#ifndef ESTRUCTURAS_H
#define ESTRUCTURAS_H

#pragma once

// --- DEFINICIÓN DE ESTRUCTURAS ---

// Nivel 3: Datos de Mantenimiento
struct CuidadosRequeridos {
    char riego[50];
    int horasLuz;
    float temperatura;
};

// Nivel 2: Especie Botánica
struct EspecieBotanica {
    char nombreCientifico[100];
    char nombreComun[100];
    char familia[50];
    CuidadosRequeridos cuidados;
};

// Nivel 1: Producto Planta (Principal)
struct ProductoPlanta {
    int idProducto;
    char categoria[50];
    float precio;
    int stock;
    EspecieBotanica especie;
};

#endif // ESTRUCTURAS_H
