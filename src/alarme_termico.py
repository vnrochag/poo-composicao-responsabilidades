class AlarmeTermico:
    def __init__(self) -> None:
        self._ligado = False

    def avaliar(self, temperatura: float) -> None:
        _ = temperatura
        # TODO checkpoint 01: aplicar os limites e preservar o estado intermediario.

    @property
    def ligado(self) -> bool:
        return self._ligado
