from println import println

TOTAL_WEIGHT_FRUITS: int = 8
TOTAL_PRICE_FRUITS: int = 25
DISCOUNT: float = 0.10

# Valores acima de 5 kilogramas
STRAWBERRYS_ABOVE_5KG: float = 2.20
APPLES_ABOVE_5KG: float = 1.50

# Valores abaixo de 5 kilogramas
STRAWBERRYS_UPTO_5KG: float = 2.50
APPLES_UPTO_5KG: float = 1.80


strawberrys, apples = input("Digite a quantidade de kilos de morangos e maçãs. Ex: 10 5: ").split(" ")
strawberrys = int(strawberrys); apples = int(apples)


# Decrições das variaveis s_weight = peso dos morangos, a_weight = peso das maçãs
def calculate_discount_fruits(s_weight: float, a_weight: float) -> str:
    purchase_total: float = ((strawberrys * STRAWBERRYS_UPTO_5KG) + (apples * APPLES_UPTO_5KG))
    discount_condition: bool = ((s_weight + a_weight) > TOTAL_WEIGHT_FRUITS or purchase_total > TOTAL_PRICE_FRUITS)
    
    get_discount = purchase_total * DISCOUNT
    purchase_discount = purchase_total - get_discount

    MSG_DISCOUNT = f'O seu total a pagar com disconto é: R$ {purchase_discount:.2f}'
    MSG_NODISCOUNT = f'O deu total a pagar sem disconto é: R$ {purchase_total:.2f}'

    return MSG_DISCOUNT if discount_condition == True else MSG_NODISCOUNT

println(calculate_discount_fruits(strawberrys, apples))
