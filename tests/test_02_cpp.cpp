#include <cassert>
#include <iostream>

#include "estacao_meteorologica.hpp"

int main() {
    EstacaoMeteorologica estacao{"TT-201", 42.0};
    assert(estacao.temperatura() == 42.0);
    assert(!estacao.alarmeLigado());

    assert(estacao.registrarTemperatura(46.0));
    assert(estacao.temperatura() == 46.0);
    assert(estacao.alarmeLigado());

    assert(estacao.registrarTemperatura(42.0));
    assert(estacao.alarmeLigado());

    assert(!estacao.registrarTemperatura(81.0));
    assert(estacao.temperatura() == 42.0);
    assert(estacao.alarmeLigado());

    assert(estacao.registrarTemperatura(39.0));
    assert(!estacao.alarmeLigado());

    std::cout << "OK checkpoint 02 C++: composicao e contrato confirmados\n";
}
