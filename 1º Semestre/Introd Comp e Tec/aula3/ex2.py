# Desenvolva um programa em Python que solicite ao usuário dois intervalos [a,b] e [c,d] e verifique se esses intervalos se interceptam.
# Exemplo:
# Intervalos [0, 1] e [1, 2] se interceptam.
# Intervalos [1, 2] e [0, 1] se interceptam.
# Intervalos [0, 1] e [2, 3] não se interceptam.
# Intervalos [2, 3] e [0, 1] não se interceptam.
# Intervalos [0, 3] e [1, 2] se interceptam.

a = int(input("Digite a: "))
b = int(input("Digite b: "))
c = int(input("Digite c: "))
d = int(input("Digite d: "))

if a > b or c > d:
    print("Dados Inválidos")
elif b < c or d < a:
    print("Não se interceptam")
else:
    print("Se Interceptam")