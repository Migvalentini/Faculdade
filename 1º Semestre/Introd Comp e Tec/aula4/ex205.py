# O coeficiente angular de um segmento de reta AB dado pelos pontos A(x1,y1) e B(x2,y2) representa a inclinação do segmento de reta, e pode ser calculado por (y2-y1)/(x2-x1). 
# Faça um algoritmo que leia, para 3 pontos A, B e C, suas coordenadas x e y, e calcule e escreva os coeficientes angulares das retas AB, BC e AC.

a1 = int(input("Digite a1: "))
a2 = int(input("Digite a2: "))
b1 = int(input("Digite b1: "))
b2 = int(input("Digite b2: "))
c1 = int(input("Digite c1: "))
c2 = int(input("Digite c2: "))

ab = (b2-a2) / (b1-a1)
bc = (c2-b2) / (c1-b1)
ac = (c2-a2) / (c1-a1)

print(ab)
print(bc)
print(ac)