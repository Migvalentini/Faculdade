# Desenvolva um programa em Python que leia o peso e a altura de uma pessoa e calcule o IMC. 
# Mostre a seguir o status de acordo com a tabela abaixo:
# IMC             | Status
# Abaixo de 18.5  | Abaixo do Peso
# Entre 18.5 e 25 | Peso ideal
# Entre 25 e 30   | Sobrepeso
# Entre 30 e 40   | Obesidade
# Acima de 40     | Obesidade Mórbida

peso = float(input("Digite o peso: "))
altura = float(input("Digite a altura: "))
IMC = peso/(altura*altura)

if IMC < 18.5:
    print("Abaixo do Peso")
elif 18.5 <= IMC < 25:
    print("Peso Ideal")
elif 25 <= IMC < 30:
    print("Sobrepeso")
elif 30 <= IMC < 40:
    print("Obesidade")
else:
    print("Obesidade Mórbida")