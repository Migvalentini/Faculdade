# Você está desenvolvendo um sistema que determina o aeroporto de destino mais frequente a partir de uma lista de voos. 
# Cada voo possui um código IATA que corresponde a um aeroporto específico.

# Tabela de Aeroportos e Códigos IATA:
# ● GRU: Aeroporto Internacional de São Paulo-Guarulhos
# ● GIG: Aeroporto Internacional do Rio de Janeiro-Galeão
# ● BSB: Aeroporto Internacional de Brasília
# ● CGH: Aeroporto de São Paulo-Congonhas
# ● SDU: Aeroporto Santos Dumont (Rio de Janeiro)

# Faça um programa em Python que leia uma sequencia de 20 números de voos e códigos IATA do aeroporto de destino de cada voo. 
# O programa deve comparar os códigos lidos com a tabela de aeroportos e, ao final, determinar qual aeroporto de destino apareceu mais vezes. 
# Imprima o código IATA e o nome do aeroporto mais frequente.

GRU,GIG,BSB,CGH,SDU=0,0,0,0,0

for voo in range(20):
    numero=int(input("Digite o número do voo: "))
    iata=input("Digite o código IATA do aeroporto de destino: ").upper()
    if iata == "GRU":
        GRU+=1
    elif iata == "GIG":
        GIG+=1
    elif iata == "BSB":
        BSB+=1
    elif iata == "CGH":
        CGH+=1
    elif iata == "SDU":
        SDU+=1
    else:
        print("Código IATA inválido")

if (GRU >= GIG) and (GRU >= BSB) and (GRU >= CGH) and (GRU >= SDU):
    print(f"O aeroporto mais frequente foi o Aeroporto Internacional de São Paulo-Guarulhos e seu código IATA é GRU")
elif (GIG >= GRU) and (GIG >= BSB) and (GIG >= CGH) and (GIG >= SDU):
    print(f"O aeroporto mais frequente foi o Aeroporto Internacional do Rio de Janeiro-Galeão e seu código IATA é GIG")
elif (BSB >= GRU) and (BSB >= GIG) and (BSB >= CGH) and (BSB >= SDU):
    print(f"O aeroporto mais frequente foi o Aeroporto Internacional de Brasília e seu código IATA é BSB")
elif (CGH >= GRU) and (CGH >= GIG) and (CGH >= BSB) and (CGH >= SDU):
    print(f"O aeroporto mais frequente foi o Aeroporto de São Paulo-Congonhas e seu código IATA é CGH")
elif (SDU >= GRU) and (SDU >= GIG) and (SDU >= BSB) and (SDU >= CGH):
    print(f"O aeroporto mais frequente foi o Aeroporto Santos Dumont (Rio de Janeiro) e seu código IATA é SDU")
else:
    print("Não houve aeroportos com maior número de frequência")