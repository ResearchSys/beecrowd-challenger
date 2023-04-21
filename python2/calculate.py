def basic_operations(x, y, case: str):
    # Type casting
    x = float(x)
    y = float(y)

    if case == '+':
        return x + y
    elif case == '-':
        return x - y
    elif case == '*':
        return x * y
    elif case == '/':
        return x / y
    else:
        return 'Operador invalido!'

