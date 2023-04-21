from println import println

ACTUALY_YEAR = 2023

get_current_year: int = int(input('Digite o ano de nascimento: '))
validate_year = ACTUALY_YEAR - get_current_year

if validate_year >= 18:
    println("Parabens você podera votar esse ano!!!")
else:
    println("Você podera não votar esse ano!!!")
