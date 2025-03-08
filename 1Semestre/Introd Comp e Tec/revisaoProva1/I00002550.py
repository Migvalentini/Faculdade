# A sequência de fibonacci é uma sequência de números que inicia por 0 e 1, e a partir do terceiro valor cada número é dado pela soma dos dois anteriores. 
# Assim, os 10 primeiros termos da série são: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34. 
# Faça um algoritmo que escreva entre os 20 primeiros termos da série de fibonacci apenas os que são primos.

primeiro = 0
segundo = 1
cont=0

while cont != 9:
   terceiro = primeiro + segundo
   primeiro=segundo
   segundo=terceiro
   div=0
   for x in range(1, terceiro+1):
      #print(x,end=" ")
      if terceiro%x == 0:
         div+=1
   if div ==2:
      print(terceiro)
      cont+=1