from println import println

IR = 0.11        # 11%
INSS = 0.08      # 8%
SINDICATO = 0.05 # 5%

price_per_hour, worked_hour_in_month = input('Digite quanto você quanha por hora, número de horas trabalhas no mês: ').split(" ")

price_per_hour = float(price_per_hour)
worked_hour_in_month = float(worked_hour_in_month)

brute_salary = price_per_hour * worked_hour_in_month

ir = brute_salary * IR
inss = brute_salary * INSS
sindicate = brute_salary * SINDICATO

liquid_salary = ((((brute_salary - ir)) - inss) - sindicate)

MSG: str = f'Salario brudo: R$ {brute_salary}\nIR (11%): R$ {brute_salary - ir}\nINSS: (8%): R$ {brute_salary - inss}\nSindicato (5%): R$ {brute_salary - sindicate}\nSalrio liquido: R$ {liquid_salary}'

println(MSG)
