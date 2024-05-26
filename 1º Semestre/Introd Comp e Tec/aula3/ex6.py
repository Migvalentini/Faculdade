# Desenvolva um programa em Python que leia o ano de nascimento de um atleta e mostre a categoria na qual ele se encaixa:
# -Até 9 anos: Mirim
# -Até 14 anos: Infantil
# -Até 19 anos: Junior
# -Até 20 anos: Sênior
# -Acima: Master

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