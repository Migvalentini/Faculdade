# Desenvolva um programa em Python que leia o ano de nascimento de um jovem e de acordo com a sua idade diga em que situação ele está:
# - já deve se alistar ao serviço militar;
# - ainda é novo para o alistamento;
# - já passou do prazo do alistamento.
# Ao final diga também o tempo que falta ou que passou em relação ao prazo de alistamento.
# Exemplos:
# Ano de nascimento: 2002
# Idade: 16 anos
# Situação: Ainda não precisa se alistar. Faltam 2 anos para o alistamento obrigatório.
# Ano de nascimento: 1997
# Idade: 21 anos
# Situação: Já passou o prazo do alistamento. Está 3 anos atrasado.

anoNascimento = int(input("Digite o ano de nascimento: "))
idade = 2024 - anoNascimento

if idade > 18:
    print(f"Já passou do prazo de alistamento\nVocê está {idade-18} anos atrasados")
elif idade == 18:
    print("Você já deve se alistar ao serviço militar")
else:
    print(f"Ainda não precisa se alistar. Faltam {18-idade} anos para o alistamento obrigatório")