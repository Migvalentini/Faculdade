# Desenvolva um programa em Python que calcule o valor a ser pago por um produto, considerando o seu preço normal e condição de pagamento:
# - à vista em dinheiro/cheque: 10% de desconto;
# - à vista no cartão de crédito: 5% de desconto;
# - em até 2x no cartão de crédito preço normal;
# - 3x ou mais no cartão de crédito 10% de juros.

valor = float(input("Digite o valor normal: "))
condicao = int(input("Digite a condição: \n1 - à vista/cheque\n2 - crédito\n3 - 2x no cartão\n4 - 3x ou mais\n"))

if condicao == 1:
    print(f"Valor a ser pago: R${valor*0.9}")
elif condicao == 2:
    print(f"Valor a ser pago: R${valor*0.95}")
elif condicao == 3:
    print(f"Valor a ser pago: R${valor/2}")
elif condicao == 4:
    print(f"Valor a ser pago: R${(valor*1.1)/3}")
else:
    print("Condição Inválida")