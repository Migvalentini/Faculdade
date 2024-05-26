# Faça um programa em Python que leia o número de malas despachadas por um passageiro e, em seguida, leia o peso de cada mala.
# O programa deve calcular e escrever o peso total da bagagem. 
# Exemplo: se o usuário indicar que deseja despachar 12 malas, o programa deverá executar um laço de repetição para ler os pesos e somá-los, escrevendo o total.

numeroMalas = int(input("Digite o número de malas: "))
pesoTotal = 0

for i in range(numeroMalas):
    peso = float(input("Digite o peso da mala: "))
    pesoTotal += peso

print(f"O peso total da bagagem é {pesoTotal}")