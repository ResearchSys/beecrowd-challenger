from println import println

JURS = 0.20

people_salary, value_of_amount, months = input('Informe o seu salario, o valor do emprestimo\na quantidade de meses para o emprestimo: ').split(" ")
people_salary = float(people_salary); value_of_amount = float(value_of_amount); months = int(months)

installment = value_of_amount / months

if installment < people_salary * JURS:
    println(f'Valor da prestação R$ {installment:.2f}')
else:
    println('Você não pode pegar o emprestimo')
