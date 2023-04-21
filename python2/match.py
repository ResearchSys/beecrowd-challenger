order = {}
menu_options = {

    '100': ['Cachorro quente', 1.20],
    '101': ['Bauru Simples', 1.30],
    '102': ['Bauru com ovo', 1.50],
    '103': ['Hamburguer', 1.20],
    '104': ['Chessburguer', 1.70],
    '105': ['Suco', 2.20],
    '106': ['Refrigerante', 1.00]
}

# Questão 20
def calculate_order_total(cod, quantity: int) -> str:
    cod = str(cod)

    if cod in menu_options:
        print(cod, quantity)
        if quantity > 0:
            value_price = menu_options.get(cod)
            order.update({cod: (value_price, quantity)})

    order_value = 0

    for line in order.items():
        # Price * Quuatity
        order_value += line[1][0][1] * line[1][1]

    print('\nRESUMO DO PEDIDO:\n')

    for line in order.items():
        resume = str(line[1][1]) + ' x ' + 'R$ ' + str(round(line[1][0][1], 2)) + ' -> ' + str(line[1][0][0])
        print(resume)

    order_value = str(round(order_value, 2))
    MSG: str = f'\nTotal da compra: R$ {order_value}'

    return MSG

# Questão 18
def match_case(case):
    case_tester = {
        "1": "Segunda-Feira",
        "2": "Terça-Feira",
        "3": "Quarta-Feira",
        "4": "Quinta-Feira",
        "5": "Sexta-Feira",
        "6": "Sábado",
        "7": "Domingo",
    }

    # Default
    for match in case_tester:
        #print(case_tester[match])
        if str(case) in match:
            #println(case_tester[match])
            return case_tester[match]

