# Uso da biblioteca matplotlib para gerar um exemplo simples de gráfico de barras verticais

import matplotlib.pyplot as plt
y = [3, 10, 7, 5, 3, 4.5, 6, 8.1]
N = len(y)
x = range(N)
width = 0.5
plt.bar(x, y, width, color="red")
plt.xlabel('Dados')
plt.ylabel('Quantidade')
plt.title('Gráfico de Barras')
plt.show()