idade = int(input("Digite a idade: "))

if idade >= 18:
    print("Maior de idade!")
    if idade <= 70:
        print("Você pode votar!")
    else:
        print("Você não pode votar!")
else:
    print("Menor de idade!")
    if idade >= 16:
        print("Você pode votar!")
    else:
        print("Você não pode votar!")