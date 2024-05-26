# Uso da biblioteca matplotlib para gerar um exemplo simples de gráfico de histograma

import matplotlib.pyplot as plt
from random import random
from math import sqrt
mu=100
sigma=15
x=[]

for i in range(10000):
   u = random()-0.5
   if u >=0 :
      x.append(mu + sigma*sqrt(u) )
   else:
      x.append(mu - sigma*sqrt(-u))
      
# Desenha o histograma dos dados
plt.hist(x, 50, facecolor='g')
plt.xlabel('Resultado')
plt.ylabel('Probabilidade')
plt.title('Histograma do Teste')
plt.grid(True)
plt.show()