from message import MENU_OPTIONS20
from match import calculate_order_total
from println import println

print(MENU_OPTIONS20)

cod_product, quantity = input('Digite o codigo do produto e a quantidade desejada: ').split(' ')
cod_product = int(cod_product); quantity = int(quantity)


println(calculate_order_total(cod_product, quantity))