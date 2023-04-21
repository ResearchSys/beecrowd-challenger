c = int(input())
for i in range(c):
    saida = ""
    reverse = ""
    a, b = map(int, input().split())
    while a <= b:
        saida += str(a)
        a += 1

    reverse = saida + saida[::-1]
    print(reverse)
