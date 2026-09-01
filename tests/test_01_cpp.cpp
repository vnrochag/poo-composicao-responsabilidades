#include <cassert>
#include <iostream>

#include "alarme_termico.hpp"

int main() {
    AlarmeTermico alarme;
    assert(!alarme.estaLigado());

    alarme.avaliar(45.0);
    assert(!alarme.estaLigado());
    alarme.avaliar(45.1);
    assert(alarme.estaLigado());
    alarme.avaliar(42.0);
    assert(alarme.estaLigado());
    alarme.avaliar(40.0);
    assert(alarme.estaLigado());
    alarme.avaliar(39.9);
    assert(!alarme.estaLigado());

    std::cout << "OK checkpoint 01 C++: transicoes do alarme confirmadas\n";
}
