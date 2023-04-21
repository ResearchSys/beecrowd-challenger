from println import println

STREET_VELOCITY = 70
TAXA = 5

car_velocity: int = int(input('Digite a velocidade do carro: '))

taxa = car_velocity - STREET_VELOCITY
taxa = TAXA * car_velocity

if car_velocity > STREET_VELOCITY and car_velocity > 0:
    println(f"Voce passou acima da velocidade permitida, e sera multado em R$ {taxa}")
else:
    println(f'Você passou com a velocidade normal de: {car_velocity} km/h')
