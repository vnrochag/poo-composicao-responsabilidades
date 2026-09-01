#ifndef ALARME_TERMICO_HPP
#define ALARME_TERMICO_HPP

class AlarmeTermico {
public:
    void avaliar(double temperatura);
    bool estaLigado() const;

private:
    bool ligado_{false};
};

#endif
