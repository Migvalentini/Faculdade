# Um número perfeito é o número que é igual à soma de seus divisores, exceto o próprio número (ex: 6 = 1 + 2 + 3. 
# Faça um algoritmo que leia 10 números e verifique para cada um se é perfeito ou não, escrevendo: 1 - se o número é perfeito; 0 - se o número não é perfeito.

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