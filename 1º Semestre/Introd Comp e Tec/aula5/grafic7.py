import matplotlib.pyplot as plt
labels = ['Grêmio', 'Palmeiras', 'Santos', 'São Paulo']
titulos = [27, 22, 22, 22]
cores = ['lightblue', 'green', 'yellow', 'red']
explode = (0.1, 0, 0, 0) # somente explode primeiro pedaço
total = sum(titulos)
plt.pie(titulos, explode=explode, labels=labels, colors=cores, autopct=lambda p: '{:.0f}'.format(p * total / 100), shadow=True, startangle=90)

# Determina que as proporções sejam iguais ('equal') de modo a desenhar o círculo
plt.axis('equal')
plt.show()