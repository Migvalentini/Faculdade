for n in range(10):
   num = int(input("Digite um número: "))
   soma=0
   for x in range(1, num):
      if num%x == 0:
         soma+=x
   if soma == num:
      print(f"O numero {num} é perfeito")
   else:
      print(f"O numero {num} não é perfeito")