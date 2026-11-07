#ifndef CONTROLDELINEA_H
#define CONTROLDELINEA_H

#include "Maquina.h"

#include <vector>

namespace planta {

// La linea conoce las maquinas pero no es dueña de ellas.
class ControlDeLinea {
private:
    std::vector<Maquina*> maquinas;

public:
    bool agregar(Maquina* maquina);

    void ejecutarTurno(int ciclos);

    void imprimirReporte() const;
};

}  // namespace planta

#endif