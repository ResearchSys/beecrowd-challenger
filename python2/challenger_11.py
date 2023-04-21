from println import println

get_year: int = int(input('Digite o ano a ser verificado: '))

if get_year % 4 == 0 and get_year % 100 != 0:
    println("o ano é bisexto")
else:
    println("O ano não é bisexto")
