# Desenvolva um programa em Python que solicite ao usuário digitar dois números reais. 
# O programa deverá verificar entre estes dois valores qual é o maior valor e mostrar na tela a diferença do maior pelo menor valor.
# Exemplo: se o usuário informar os números 97.6 e 32.65, deverá ser mostrada na tela a mensagem “ 97.6 – 32.5 = 65.1”. 

n1 = float(input("digite o primeiro numero: "))
n2 = float(input("digite o segundo numero: "))

if n2>n1:
    print(n2,"-",n1,"=",n2-n1)
else:
    print(n1,"-",n2,"=",n1-n2)