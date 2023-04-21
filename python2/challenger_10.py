from println import println

list_of_number = []

for i in range(3):
    get_user_numbers = int(input('Digite os numeros a serem ordenados: '))
    list_of_number.append(get_user_numbers)
    
    list_of_number.sort(reverse = True)
    println(list_of_number)

