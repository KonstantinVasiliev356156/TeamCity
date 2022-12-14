import calculator

class Tests:
    def test_plus(self):
        output = calculator.calculate("8 + 4")
        assert output == 12
    def test_minus(self):
        output = calculator.calculate("8 - 4")
        assert output == 4
    def test_multiply(self):
        output = calculator.calculate("8 * 4")
        assert output == 32
    def test_divide(self):
        output = calculator.calculate("8 / 4")
        assert output == 2
