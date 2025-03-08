# Desenvolva um programa em Python que solicite ao usuário o nome e 3 notas dos 10 alunos da turma de segundo ano. 
# Essas informações devem então ser gravadas no arquivo “notas.csv”.
# A seguir faça a leitura do arquivo “notas.csv” e calcule a média das 3 notas de cada aluno, registrando essa informação em um novo arquivo “medias.txt”, 
# sendo que a última linha do aquivo deve conter a média geral da turma.
# Exemplo:
# Arquivo notas.csv:
# Maria,8,8.5,9
# Joao,6,7,5.5
# Jose,7,7,8
# ...
# Arquivo medias.txt:
# Maria-8.5
# Joao-6.17
# Jose-7.33
# ...
# Media Geral-7.33

nome1 = input("Digite o nome do aluno 1: ")
nota1Aluno1 = float(input("Digite a nota 1 do aluno 1: "))
nota2Aluno1 = float(input("Digite a nota 2 do aluno 1: "))
nota3Aluno1 = float(input("Digite a nota 3 do aluno 1: "))

nome2 = input("Digite o nome do aluno 2: ")
nota1Aluno2 = float(input("Digite a nota 1 do aluno 2: "))
nota2Aluno2 = float(input("Digite a nota 2 do aluno 2: "))
nota3Aluno2 = float(input("Digite a nota 3 do aluno 2: "))

nome3 = input("Digite o nome do aluno 3: ")
nota1Aluno3 = float(input("Digite a nota 1 do aluno 3: "))
nota2Aluno3 = float(input("Digite a nota 2 do aluno 3: "))
nota3Aluno3 = float(input("Digite a nota 3 do aluno 3: "))

arq = open("c:/Users/mvalentini3/Documents/GitHub/Faculdade/1º Semestre/Introd Comp e Tec/aula3/notas.csv","w")

arq.write(f"{nome1};{nota1Aluno1};{nota2Aluno1};{nota3Aluno1},")
arq.write(f"{nome2};{nota1Aluno2};{nota2Aluno2};{nota3Aluno2},")
arq.write(f"{nome3};{nota1Aluno3};{nota2Aluno3};{nota3Aluno3}")

arq.close()

arq = open("c:/Users/mvalentini3/Documents/GitHub/Faculdade/1º Semestre/Introd Comp e Tec/aula3/notas.csv","r")

linhas = arq.readline()

linha1,linha2,linha3=linhas.strip().split(",")
print(linha1.strip().split(";"))
print(linha2.strip().split(";"))
print(linha3.strip().split(";"))

media1 = (float(linha1.strip().split(";")[1]) + float(linha1.strip().split(";")[2]) + float(linha1.strip().split(";")[3]))/3
media2 = (float(linha2.strip().split(";")[1]) + float(linha2.strip().split(";")[2]) + float(linha2.strip().split(";")[3]))/3
media3 = (float(linha3.strip().split(";")[1]) + float(linha3.strip().split(";")[2]) + float(linha3.strip().split(";")[3]))/3
mediaGeral = (media1 + media2 + media3) / 3
print(mediaGeral)

arq.close()

arq = open("c:/Users/mvalentini3/Documents/GitHub/Faculdade/1º Semestre/Introd Comp e Tec/aula3/medias.txt","w")

arq.write(f"{nome1}: {media1};\n")
arq.write(f"{nome2}: {media2};\n")
arq.write(f"{nome3}: {media3};\n")
arq.write(f"Media Geral: {mediaGeral};")

arq.close()