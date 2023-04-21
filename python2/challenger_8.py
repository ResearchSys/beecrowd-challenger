from println import println

get_name_club1, club1_goals, get_name_club2, club2_goals = input(" Digite os nomes dos times seguidos dos seu gols: ").split(" ")

if club1_goals > club2_goals:
    println(f'O vencedor é {get_name_club1}')
elif club1_goals < club2_goals:
    println(f'O vencedor é {get_name_club2}')
else:
    println(f'Empate')
