COMMON_FUEL = 2.50
ALCOOL = 1.90

# alcool
A_UPTO20LITERS = 0.03  # 3%
A_ABOVE20LITERS = 0.05 # 5%

# gasolina comum
G_UPTO20LITERS = 0.03  # 4%
G_ABOVE20LITERS = 0.06 # 6%

def calculate_price_fuel(liters: int, cod_type_fuel: str):
    if cod_type_fuel == 'A-Alcool' and liters <= 20:
        total = liters * ALCOOL
        discount = total * A_UPTO20LITERS
        return f'O Total à pagar é: R$ {total - discount}'

    if cod_type_fuel == 'A-Alcool' and liters > 20:
        total = liters * ALCOOL
        discount = total * A_ABOVE20LITERS
        return f'O Total à pagar é: R$ {total - discount}'

    if cod_type_fuel == 'G-Gasolina' and liters <= 20:
        total = liters * COMMON_FUEL
        discount = total * G_UPTO20LITERS    
        return f'O Total à pagar é: R$ {total - discount}'

    if cod_type_fuel == 'G-Gasolina' and liters > 20:
        total = liters * COMMON_FUEL
        discount = total * G_ABOVE20LITERS
        
        return f'O Total à pagar é: R$ {total - discount}'


