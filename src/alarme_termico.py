class AlarmeTermico:
    def __init__(self) -> None:
        self._ligado = False

    def avaliar(self, temperatura: float) -> None:
        if temperatura > 45.0:
            self._ligado = True
        elif temperatura < 40.0:
            self._ligado = False

    @property
    def ligado(self) -> bool:
        return self._ligado