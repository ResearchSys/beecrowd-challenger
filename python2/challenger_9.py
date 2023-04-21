from println import println

MIN_AGE = 65
MIN_WORKED = 30
TWO_MIN_AGE = 60
TWO_MIN_WORKED = 25
CURRENT_DATA = 2023

emploeye_number, birth_day, entry_in_work = input("Digite o numero do empregado, a data de nascimento\n e a data de entrada na empresa: ").split(" ")

out_data_emploeye = (CURRENT_DATA - int(birth_day))
time_worked = CURRENT_DATA - int(entry_in_work)

if out_data_emploeye >= MIN_AGE or time_worked >= MIN_WORKED or out_data_emploeye >= TWO_MIN_AGE or time_worked >= TWO_MIN_WORKED:
    println(f'O empregado {emploeye_number} requer aposentadoria')
else:
    println(f'O empregado {emploeye_number} não requer aposentadoria')
