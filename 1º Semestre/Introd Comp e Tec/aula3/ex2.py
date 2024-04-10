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