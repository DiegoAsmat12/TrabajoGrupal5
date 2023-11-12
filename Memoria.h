//
// Created by diego on 11/12/2023.
//

#ifndef EJERCICIOGRUPAL5_MEMORIA_H
#define EJERCICIOGRUPAL5_MEMORIA_H

#include <iostream>

using namespace std;


class Memoria {
    int cronologicOrder;
    string memoria;
public:
    int getCronologicOrder() const;

    void setCronologicOrder(int cronologicOrder);

    const string &getMemoria() const;

    void setMemoria(const string &memoria);

};


#endif //EJERCICIOGRUPAL5_MEMORIA_H
