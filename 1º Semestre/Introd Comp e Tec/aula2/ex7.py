# Desenvolva um programa em Python que solicite ao usuário informar o número inteiro referente à matrícula de um aluno e três valores reais que correspondam às três notas do aluno. 
# O programa deverá calcular a média harmônica do aluno, considerando que a primeira nota tem peso 1, a segunda nota tem peso 2 e a terceira nota tem peso 3. 
# No final, o algoritmo deverá mostrar na tela o número da matrícula do aluno, a média calculada e a mensagem " Aprovado" se a média for maior ou igual a 6 e "Reprovado" se a média for menor que 6.
# mediaponderada= 6
# 1 + 2 + 3
# n1 n2 n3
# Exemplo: se o usuário informar os valores 121 como matrícula do aluno e 7.5, 6 e 9.5 respectivamente como a primeira, segunda e terceira notas de um aluno, o algoritmo deverá calcular a média e mostrar o resultado final:
# Código do aluno: 121
# Média: 7,66815683
# Aprovado!

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