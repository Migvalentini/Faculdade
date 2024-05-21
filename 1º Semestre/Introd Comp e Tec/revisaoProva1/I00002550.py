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