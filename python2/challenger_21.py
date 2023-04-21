from println import println

day, month, year = input("Digite a data. Ex: DD MM YYYY.\nObs: Os valores sao separados por espaço Ex.02 04 2023: ").split(" ")
day = int(day); month = int(month); year = int(year)



def validate_date():
    FLAG = False

    # Essa expressão avalia se o mês tem 30 dias
    MONTH_30_EXPR: bool = (month == 4 or month == 6 or month == 9 or month == 11)
    # Essa expressão avalia de o mês tem 31 dias
    MONTH_31_EXPR: bool = (month == 1 or month == 3 or month == 5 or month == 7 or month == 8 or month == 10 or month == 12)

    if(MONTH_31_EXPR):
        if(day <= 31): FLAG = True
    
    elif(MONTH_30_EXPR):
        if(day <= 30): FLAG = True
    
    elif(month == 2):
        # Verifica de o ano é bissexto
        if(year % 4 == 0 and year % 100 != 0) or (year % 400 == 0):
            if(day <= 29): FLAG = True

        elif(day <= 28): FLAG = True

    if FLAG == True:
        println("Data valida")
    else:
        println("Data invalida")


validate_date()
