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
#arq = open("c:/Users/mvalentini3/Documents/GitHub/Faculdade/1º Semestre/Introd Comp e Tec/aula3/notas.csv","w") caminho em casa

arq.write(f"{nome1};{nota1Aluno1};{nota2Aluno1};{nota3Aluno1},")
arq.write(f"{nome2};{nota1Aluno2};{nota2Aluno2};{nota3Aluno2},")
arq.write(f"{nome3};{nota1Aluno3};{nota2Aluno3};{nota3Aluno3}")

arq.close()

arq = open("c:/Users/mvalentini3/Documents/GitHub/Faculdade/1º Semestre/Introd Comp e Tec/aula3/notas.csv","r")
#arq = open("c:/Users/mvalentini3/Documents/GitHub/Faculdade/1º Semestre/Introd Comp e Tec/aula3/notas.csv","r") caminho em casa

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
#arq = open("c:/Users/mvalentini3/Documents/GitHub/Faculdade/1º Semestre/Introd Comp e Tec/aula3/medias.txt","w") caminho em casa

arq.write(f"{nome1}: {media1};\n")
arq.write(f"{nome2}: {media2};\n")
arq.write(f"{nome3}: {media3};\n")
arq.write(f"Media Geral: {mediaGeral};")

arq.close()