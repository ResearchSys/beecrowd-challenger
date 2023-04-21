from println import println

dia, mes, ano = input("Digite a data. Ex: DD MM YYYY.\nObs: Os valores sao separados por espaço Ex.02 04 2023: ").split(" ")
dia = int(dia); mes = int(mes); ano = int(ano)

# verifica se o ano é bissexto ou não
if ano % 4 == 0 and (ano % 100 != 0 or ano % 400 == 0):
    bissexto = True
else:
    bissexto = False

# verifica quantos dias tem o mês atual
if mes == 2:
    if bissexto:
        dias_no_mes = 29
    else:
        dias_no_mes = 28
elif mes in [4, 6, 9, 11]:
    dias_no_mes = 30
else:
    dias_no_mes = 31

# verifica se o dia é válido
if dia < 1 or dia > dias_no_mes:
    print("Data inválida!")
else:
    # calcula a data do próximo dia
    if dia == dias_no_mes:
        if mes == 12:
            dia = 1
            mes = 1
            ano += 1
        else:
            dia = 1
            mes += 1
    else:
        dia += 1

    # imprime a data do próximo dia
    println("A data do próximo dia é: {}/{}/{}".format(dia, mes, ano))

