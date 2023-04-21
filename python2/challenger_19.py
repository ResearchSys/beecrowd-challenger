from message import MENU_OPTIONS19

print(MENU_OPTIONS19)

dish, dessert, drink = input('Digite o numero do prato, sobremesa e bebida: ').split(" ")
dish = int(dish); dessert = int(dessert); drink = int(drink)

def calculate_calories(dish: int, dessert: int, drink) -> int:
    options = [[0, 0, 0, 0, 0], [0, 180, 230, 250, 350], [0, 75, 110, 170, 200], [0, 20, 70, 100, 65]]
    calories = options[1][dish] + options[2][dessert] + options[3][drink]

    return calories

print(f'O total de calorias é {calculate_calories(dish, dessert, drink)}')
