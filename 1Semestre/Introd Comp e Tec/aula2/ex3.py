# Desenvolva um programa em Python que solicite ao usuário digitar um número inteiro. 
# Após a digitação, o computador deverá mostrar na tela uma mensagem informando se o número maior, menor ou igual a zero.
# Exemplos: se o usuário informar o número 38, deverá ser mostrado na tela a mensagem “38 é um número maior que zero”. 
# Se o usuário informar o número -13, deverá ser mostrado na tela a mensagem “-13 é um número menor que zero”. 
# Se o usuário informar o número 0, deverá ser mostrado na tela a mensagem “Número digitado igual a zero”. 

numero = int(input("Digite um número: "))

if numero > 0:
    print(numero,"é um número maior que zero")
elif numero == 0:
    print("Número digitado igual a zero")
else:
    print(numero,"é um número menor que zero")