import unittest

from alarme_termico import AlarmeTermico


class TestAlarmeTermico(unittest.TestCase):
    def test_limites_e_preservacao_do_estado(self) -> None:
        alarme = AlarmeTermico()
        self.assertFalse(alarme.ligado)

        alarme.avaliar(45.0)
        self.assertFalse(alarme.ligado)
        alarme.avaliar(45.1)
        self.assertTrue(alarme.ligado)
        alarme.avaliar(42.0)
        self.assertTrue(alarme.ligado)
        alarme.avaliar(40.0)
        self.assertTrue(alarme.ligado)
        alarme.avaliar(39.9)
        self.assertFalse(alarme.ligado)

        with self.assertRaises(AttributeError):
            alarme.ligado = True


if __name__ == "__main__":
    unittest.main()
