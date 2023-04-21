from  println import println

list_of_types = ["unidade", "dezena", "centena"]

while True:
    get_verify_number: int = int(input("Digite o numero a ser verificado: "))
    
    if get_verify_number == 0 or get_verify_number >= 1000:
        println('invalid number')
        break

    get_verify_number = get_verify_number[::-1]

    for i, number in enumerate(get_verify_number):
        println(f'{number} é {list_of_types[i]}')
