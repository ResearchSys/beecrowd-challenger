while True:
 try:
  line = input().split(" ")
  army1, army2 = line 
  print(abs(int(army1) - int(army2)))
 except EOFError:
  break
