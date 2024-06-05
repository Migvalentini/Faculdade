n1 = float(input("Digite a nota 1: "))
n2 = float(input("Digite a nota 2: "))
n3 = float(input("Digite a nota 3: "))

media = 3/((1/n1)+(1/n2)+(1/n3))

print("A média é:", round(media,2))

if media >= 6:
    print("APROVADO!")