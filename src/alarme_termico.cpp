#include "alarme_termico.hpp"

void AlarmeTermico::avaliar(double temperatura) {
    (void)temperatura;
    // TODO checkpoint 01: aplicar os limites sem perder o estado intermediario.
}

bool AlarmeTermico::estaLigado() const { return ligado_; }
