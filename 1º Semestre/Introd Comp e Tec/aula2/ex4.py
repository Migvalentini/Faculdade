# Desenvolva um programa em Python que solicite ao usuário digitar dois números inteiros. 
# O programa deverá verificar entre estes dois valores qual é o maior e mostrar na tela o maior valor. 
# Se dois valores iguais forem digitados, o algoritmo deverá mostrar a mensagem dizendo que dois números iguais foram digitados.
# Exemplo: se o usuário informar os números 15 e 43, deverá ser mostrado na tela a mensagem “Maior valor: 43”. 
# Se o usuário informar os números 15 e 15, deverá ser mostrado na tela a mensagem “Dois números iguais foram informados”. 

n1 = int(input("Digite o primeiro número: "))
n2 = int(input("Digite o segundo número: "))

if n1>n2:
    print("Maior valor:",n1)
elif n1==n2:
    print("Dois números iguais foram informados")
else:
    print("Maior valor:",n2)