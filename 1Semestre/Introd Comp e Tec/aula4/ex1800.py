# Faça um algoritmo que leia o código e a votação de cada um dos candidatos a uma vaga no senado, até que o código digitado seja 0 (não deverá ser lida a votação neste caso). 
# O algoritmo deve escrever os códigos e as votações dos dois senadores eleitos (assuma que não haverão três candidatos com igual votação e que seja a maior votação).

cod1,vot1,cod2,vot2 = 0,0,0,0

cod = int(input("Digite o código do candidato: "))
cod1 = cod

while(cod!=0):
   votos = int(input("Digite a votação do candidato: "))
   if votos > vot1:
      vot2 = vot1
      cod2 = cod1
      vot1 = votos
      cod1 = cod
   elif votos > vot2:
      vot2 = votos
      cod2 = cod
   cod = int(input("Digite o código do candidato: "))
      
print(f"Candidato 1: Código {cod1} e {vot1} votos")
print(f"Candidato 2: Código {cod2} e {vot2} votos")