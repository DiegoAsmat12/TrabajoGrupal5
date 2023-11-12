//
// Created by diego on 11/12/2023.
//

#include "Cerebro.h"

void Cerebro::agregarMemoria(Memoria *memoria) {
    if(memoria->getCronologicOrder()== acceptedCronologicOrder){
        memorias.push_back(memoria);
    }
}
