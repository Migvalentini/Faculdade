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