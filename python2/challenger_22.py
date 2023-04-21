from println import println

value = int(input("Digite um valor em Reais: "))

notes100 = value // 100
value %= 100

notes50 = value // 50
value %= 50

notes10 = value // 10
value %= 10

notes5 = value // 5
value %= 5

notes1 = value

print("Notas de 100: %d" % notes100)
print("Notas de 50: %d" % notes50)
print("Notas de 10: %d" % notes10)
print("Notas de 5: %d" % notes5)
print("Notas de 1: %d" % notes1)

println()
