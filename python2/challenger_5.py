from println import println

SIX_APPLE: float = 2.25
APPLE: int = 2

get_user_quantity: int = int(input('Digite o numero de maÇãs'))
total1 = get_user_quantity * SIX_APPLE
total2 = get_user_quantity * APPLE

if get_user_quantity <= SIX_APPLE:
    println("Voce comprou {get_user_quantity} maÇãs e o total a pagar é: {total1}".format(total1))
if get_user_quantity >= APPLE:
    println("Voce comprou {get_user_quantity} maÇãs e o total a pagar é: {total2}".format(total2))
