anoNascimento = int(input("Digite o ano de nascimento: "))
idade = 2024 - anoNascimento
print(f"Idade: {idade} anos")

if idade < 9:
    print("Categoria Mirim")
elif idade <= 14:
    print("Categoria Infantil")
elif idade <= 19:
    print("Categoria Junior")
elif idade <= 20:
    print("Categoria Sênior")
else:
    print("Categoria Master")