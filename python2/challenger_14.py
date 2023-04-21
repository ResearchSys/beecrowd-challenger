from println import println

lt1, lt2, lt3 = input('Digite os valores dos 3 lados dos trangulos: ').split(" ")
lt1 = float(lt1); lt2 = float(lt2); lt3 = float(lt3)

if (lt1 + lt2) > lt3:
    println('Não é um Triangulo')

if lt1 == lt2 and lt2 == lt3 and lt1 == lt3:
    println('Triangulo equilatero')

if lt1 == lt2 or lt1 == lt3 or lt2 == lt3:
    println('Triangulo isoceles')

if lt1 != lt2 and lt1 != lt3 and lt2 != lt3:
    println('Triangulo Escaleno')

