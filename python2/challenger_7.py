from println import println

account_number, salary, deb, cred = input("Digite o numero da conta, o saldo, debito e cretido: ")

current_value: float = float(salary) - float(deb) + float(cred)

if current_value >= 0:
    println(f'Seu saldo positivo: {current_value}')
else:
    println(f'Seu saldo negativo: {current_value}')
