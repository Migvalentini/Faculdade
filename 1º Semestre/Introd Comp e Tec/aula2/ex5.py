# Desenvolva um programa em Python que solicite ao usuário digitar dois números reais.
# O programa deverá verificar entre estes dois valores qual é o menor valor e mostrar na tela os dois valores em ordem crescente.
# Exemplo: se o usuário informar os números 97.6 e 32.65, deverá ser mostrado na tela a mensagem “Valores em ordem crescente: 32.5 e 97.6”

n1 = float(input("digite o primeiro numero: "))
n2 = float(input("digite o segundo numero: "))

if n2>n1:
    print("Valores em ordem crescente:",n1,"e",n2)
else:
    print("Valores em ordem crescente:",n2,"e",n1)