import random
from println import println

get_user_number: int = int(input('Digite um numero entre 1 e 10: '))
win_number = random.randint(1, 10);
    
if get_user_number == win_number:
    println(f"Parabens voce acertou, o numero sorteado e {win_number}.")
else:
    println("Voce errou!")
