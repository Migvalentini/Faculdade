# Um voo está sendo monitorado e é necessário calcular a duração do voo. 
# Faça um programa em Python que leia o horário de decolagem (Hi, Mi) e o horário de pouso (Hf, Mf) de um voo, e calcule a duração do voo em horas e minutos. 
# Considere que o voo ocorre no mesmo dia

Hi=int(input("Digite a hora da decolagem: "))
Mi=int(input("Digite o minuto da decolagem: "))
Hf=int(input("Digite o a hora do pouso: "))
Mf=int(input("Digite o minuto do pouso: "))

if (Hi<23 and Hi >= 0) and (Mi < 59 and Mi >= 0) and (Hf<23 and Hf >= 0) and (Mf < 59 and Mf >= 0):
    minutosDecolagem = Hi * 60 + Mi
    minutosPouso = Hf * 60 + Mf

    minutosVooTotal = minutosPouso-minutosDecolagem

    horasVoo = minutosVooTotal // 60
    minutosVoo = minutosVooTotal - horasVoo * 60

    print(f"A duração do voo foi de {horasVoo} horas e {minutosVoo} minutos")
else: 
    print("Dados inválidos")