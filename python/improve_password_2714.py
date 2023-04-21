vezes = int(input())
for i in range(vezes):
  senha = input()
 
  if senha[:2] == "RA":
    if len(senha)>=20:
      final = senha[2:]
      print(int(final))
   
    else:
      print("INVALID DATA")
  else:
    print("INVALID DATA")
