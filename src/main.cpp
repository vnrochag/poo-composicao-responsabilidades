#include <iostream>

#include "estacao_meteorologica.hpp"

int main() {
    EstacaoMeteorologica estacao{"TT-201", 42.0};
    std::cout << "TT-201: " << estacao.temperatura()
              << " C | alarme: " << (estacao.alarmeLigado() ? "ligado" : "desligado") << '\n';
    const bool aceita = estacao.registrarTemperatura(46.0);
    std::cout << "Leitura aceita: " << std::boolalpha << aceita << '\n';
    std::cout << "TT-201: " << estacao.temperatura()
              << " C | alarme: " << (estacao.alarmeLigado() ? "ligado" : "desligado") << '\n';
}
