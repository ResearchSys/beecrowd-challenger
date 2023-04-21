from println import println
from calculate import basic_operations

value_x, value_y, operation = input('Digite os dois numeros mais a operacao desejada: (+, -, *, /): ').split(" ")
println(basic_operations(value_x, value_y, operation))
