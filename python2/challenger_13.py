from println import println
from fuel import calculate_price_fuel

quantity_liters, type_fuel = input('Combutiveis\nA-Alcool\nG-Gasolina\n\nDigite a quantidade litros e o tipo do combustivel: ').split(" ")
quantity_liters = int(quantity_liters)

println(calculate_price_fuel(quantity_liters, type_fuel))
