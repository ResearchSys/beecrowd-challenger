from println import println

number = int(input("Digte um numero: "))

total: int = number * number
black: int = int(total / 2)
white: int = total - black

println(f'{white} casas brancas e {black} casas pretas')
