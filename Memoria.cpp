//
// Created by diego on 11/12/2023.
//

#include "Memoria.h"

int Memoria::getCronologicOrder() const {
    return cronologicOrder;
}

void Memoria::setCronologicOrder(int cronologicOrder) {
    Memoria::cronologicOrder = cronologicOrder;
}

const string &Memoria::getMemoria() const {
    return memoria;
}

void Memoria::setMemoria(const string &memoria) {
    Memoria::memoria = memoria;
}
