anoNascimento = int(input("Digite o ano de nascimento: "))
idade = 2024 - anoNascimento

if idade > 18:
    print(f"Já passou do prazo de alistamento\nVocê está {idade-18} anos atrasados")
elif idade == 18:
    print("Você já deve se alistar ao serviço militar")
else:
    print(f"Ainda não precisa se alistar. Faltam {18-idade} anos para o alistamento obrigatório")