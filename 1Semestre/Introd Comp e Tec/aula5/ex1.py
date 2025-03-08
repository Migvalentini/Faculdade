# Escrever um programa que leia diversas amostras de cobaias utilizadas em uma experiência. 
# Esta experiência trabalha com 4 tipos de cobaias: 1= ratos 2= coelhos 3= aranhas 4=cobras. 
# Para cada amostra, o programa deverá solicitar o tipo de cobaia que está sendo utilizada, a quantidade de animais utilizadas na amostra. 
# A entrada de dados será encerrada quando for digitado 0 no tipo da cobaia.
# Armazenar a quantidade de cobaias em uma lista. 
# No final do programa deverão ser mostrados na tela, o total de cobaias utilizadas, o total de coelhos, de ratos, de aranhas e de cobras, a percentagem de cada tipo de animal. 
# Além disso, devem se gerado gráfico de barras mostrando o total de cada tipo de animal e um gráfico em forma de pizza mostrando a percentagem de cada tipo de animal.

dados = []

while True:
   tipo = int(input("Digite o tipo da cobaia (1 - rato, 2 - coelho, 3 - aranha, 4 - cobra): "))
   if tipo == 0:
      break
   quantidade = int(input("Digite a quantidade de cobaias: "))
   dados.append((tipo, quantidade))
   
print(dados)

total = sum([qtd for tipo, qtd in dados])
total_ratos = sum([qtd for tipo, qtd in dados if tipo == 1])
porcentagem_ratos = total_ratos / total * 100
total_coelhos = sum([qtd for tipo, qtd in dados if tipo == 2])
porcentagem_coelhos = total_coelhos / total * 100
total_aranhas = sum([qtd for tipo, qtd in dados if tipo == 3])
porcentagem_aranhas = total_aranhas / total * 100
total_cobras = sum([qtd for tipo, qtd in dados if tipo == 4])
porcentagem_cobras = total_cobras / total * 100

print('Total de cobaias: ', total)
print('Total de ratos: ', total_ratos)
print('Porcentagem de ratos: ', porcentagem_ratos)
print('Total de coelhos: ', total_coelhos)
print('Porcentagem de coelhos: ', porcentagem_coelhos)
print('Total de aranhas: ', total_aranhas)
print('Porcentagem de aranhas: ', porcentagem_aranhas)
print('Total de cobras: ', total_cobras)
print('Porcentagem de cobras: ', porcentagem_cobras)

import matplotlib.pyplot as plt
for tipo, qtd in dados:
   if tipo == 1:
      plt.bar('Ratos', qtd, color='gray')
   elif tipo == 2:
      plt.bar('Coelhos', qtd, color='brown')
   elif tipo == 3:
      plt.bar('Aranhas', qtd, color='black')
   elif tipo == 4:
      plt.bar('Cobras', qtd, color='green')
plt.xlabel('Animais')
plt.ylabel('Total')
plt.title('Gráfico de Barras')
plt.show()

labels = ['Ratos', 'Coelhos', 'Aranhas', 'Cobras']
titulos = [porcentagem_ratos, porcentagem_coelhos, porcentagem_aranhas, porcentagem_cobras]
cores = ['gray', 'brown', 'darkgray', 'green']
total = sum(titulos)
plt.pie(titulos, labels=labels, colors=cores, autopct=lambda p: '{:.0f}'.format(p * total / 100), shadow=True, startangle=90)

plt.axis('equal')
plt.show()