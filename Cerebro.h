#ifndef EJERCICIOGRUPAL5_CEREBRO_H
#define EJERCICIOGRUPAL5_CEREBRO_H

#include <iostream>
#include <vector>
#include "Memoria.h"

using namespace std;


class Cerebro {
protected:
    vector<Memoria*> memorias;
    int cronologicOrder;
public:
    virtual ~Cerebro(){
        for(Memoria* memoria: memorias){
            delete memoria;
        }
    };
    virtual void agregarMemoria(Memoria* memoria);

};


#endif //EJERCICIOGRUPAL5_CEREBRO_H
