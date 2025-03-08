# Fazer um programa que leia os índices de inflacão mensal (de janeiro a dezembro) de um determinado ano para calcular o IPCA (índice de inflacão calculado pelo IBGE). 
# Além da taxa de inflacão mensal, o programa deverá solicitar o ano em questão, a meta para inflacão no ano e o intervalo de tolerância (para cima ou para baixo da meta). 
# O programa deverá calcular a taxa acumulada de inflacão, e mostrar uma mensagem se esta taxa está dentro das metas determinadas para o IPCA pelo Banco Central. 
# Além disso, deverá mostrar um gráfico com as taxas mensais de inflacão acumulada.
# Forma de cálculo do IPCA:
# - Meta para inflacão no ano: 4,5%
# - Intervalo de tolerância: 2% para cima ou para baixo da meta
# MÊS IPCA (%)
# Janeiro 0,5  Fevereiro 0,4  Marco 0,3  Abril 0,5  Maio 0,7  Junho 0,4  Julho -0,2  Agosto -0,5  Setembro 0,3  Outubro 0,7  Novembro 0,9  Dezembro 1,0
# Para calcular a acumulacão da inflacão, deve-se utilizar a seguinte fórmula matemática
# Onde “i1″,”i2″, “in” representam as taxas que serão acumuladas em seu valor percentual.
# O cálculo do IPCA é realizado da seguinte forma:
# [(1,005)x(1,004)x(1,003)x(1,005)x(1,007)x(1,004)x(0,998)x(0,995)x(1,003)x(1,007)x(1,009)x(1,01) – 1] x 100.
# IPCA do ano = 5,1%
# O IPCA está dentro das metas definidas do ano

import matplotlib.pyplot as plt

ano = int(input("Digite o ano: "))
meta_anual = float(input("Digite a meta de inflação para o ano: "))
tolerancia = float(input("Digite o intervalo de tolerância para a meta (em %): "))

taxas_mensais = []
meses = ['Janeiro', 'Fevereiro', 'Março', 'Abril', 'Maio', 'Junho', 'Julho', 'Agosto', 'Setembro', 'Outubro', 'Novembro', 'Dezembro']
for mes in meses:
    taxa = float(input(f"Digite a taxa de inflação para {mes} (%): "))
    taxas_mensais.append(taxa)

acumulado = 1
acumulado_mensal = []
for taxa in taxas_mensais:
    acumulado *= (1 + taxa / 100)
    acumulado_mensal.append((acumulado - 1) * 100)

meta_min = meta_anual - tolerancia
meta_max = meta_anual + tolerancia
ipca_acumulado = (acumulado - 1) * 100
dentro_das_metas = meta_min <= ipca_acumulado <= meta_max

print(f"\nIPCA do ano de {ano}: {ipca_acumulado:.1f}%")
if dentro_das_metas:
    print("O IPCA está dentro das metas definidas para o ano.")
else:
    print("O IPCA está fora das metas definidas para o ano.")

plt.figure(figsize=(10, 6))
plt.plot(meses, acumulado_mensal, marker='o', linestyle='-')
plt.title(f'Taxa de Inflação Acumulada Mensal - {ano}')
plt.xlabel('Mês')
plt.ylabel('Taxa de Inflação Acumulada (%)')
plt.xticks(rotation=45)
plt.grid(True)
plt.tight_layout()
plt.show()

plt.figure(figsize=(10, 6))
plt.plot(meses[5:], acumulado_mensal, marker='o', linestyle='-')
plt.title(f'Taxa de Inflação Acumulada Mensal - {ano}')
plt.xlabel('Mês')
plt.ylabel('Taxa de Inflação Acumulada (%)')
plt.xticks(rotation=45)
plt.grid(True)
plt.tight_layout()
plt.show()
