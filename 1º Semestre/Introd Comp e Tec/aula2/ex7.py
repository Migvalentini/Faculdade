matricula = int(input("Digite a matricula: "))
n1 = float(input("Digite o primeiro numero: "))
n2 = float(input("Digite o segundo numero: "))
n3 = float(input("Digite o terceiro numero: "))

mediaHarmonica = 6/((1/n1)+(2/n2)+(3/n3))

print("\nCódigo do Aluno:",matricula,"\nMédia:",round(mediaHarmonica,2))

if mediaHarmonica >= 6:
    print("Aprovado")
else:
    print("Reprovado")