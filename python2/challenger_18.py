from println import println
from match import match_case

def check_day_of_week(number: int):
    println(match_case(number))

while True:
    get_user_number: int = int(input("Digite o numero para ver o dia da semana: "))
    check_day_of_week(get_user_number)

    get_user_param: str = input("Deseja continuar S/N? ")
    if get_user_param.lower() == 'n':
        println('Saindo do programa')
        break
    else:
        continue

