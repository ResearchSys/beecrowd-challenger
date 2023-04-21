from println import println

STANDARD_COD: int = 1234
STANDARD_PASSWORD: int = 9999

get_user_code, get_user_password = input("Digite o seu codigo e a sua senha: ").split(" ")

get_user_code = int(get_user_code)
get_user_password = int(get_user_password)

def get_acess():
    if get_user_code != STANDARD_COD:
        println('codigo invalido')
    elif get_user_password != STANDARD_PASSWORD:
        println('senha invalida')
    elif get_user_password == STANDARD_PASSWORD and get_user_code == STANDARD_COD:
        println('Acesso permitido')
    else:
        println("Acesso negado")

get_acess()
