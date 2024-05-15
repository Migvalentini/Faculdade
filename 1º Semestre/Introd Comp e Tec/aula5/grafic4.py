import matplotlib.pyplot as plt
x = ['C','Java','JavaScript','C#','Python','PHP']
y = [5,14,16,17,12,15]
plt.barh(x,y)
plt.xlabel('Linguagens')
plt.title('Linguagens de Programação')
plt.show()