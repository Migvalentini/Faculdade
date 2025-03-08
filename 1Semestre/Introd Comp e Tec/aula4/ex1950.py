# Faça um algoritmo que escreva os 50 primeiros números primos.

num = 0
x = 0
cont = 0

while cont < 50:
   x = x + 1
   # print("\nx = " + str(x) + "\n")
   div = 0
   for y in range(1, x+1):
      if x % y == 0:
         div += 1
   if div == 2:
      cont += 1
      print(f"O número {y} é primo")