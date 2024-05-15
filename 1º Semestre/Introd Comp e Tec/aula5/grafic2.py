import matplotlib.pyplot as plt
import math
import cmath
x=[]
y=[]
z=[]
a=-3
while True:
   a=a+0.1
   if a>3:
      break

   vlr=a*math.pi
   x.append(vlr)
   y.append(cmath.sin(vlr))
   z.append(cmath.cos(vlr))

plt.plot(x,y,'r+-',x,z,'bo-')
plt.title("Gráfico das funções seno(x) e cosseno (x)")
plt.xlabel("Eixo das abscissas")
plt.ylabel("Eixo das ordenadas")
plt.show()