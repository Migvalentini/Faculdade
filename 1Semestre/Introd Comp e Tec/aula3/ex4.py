# Desenvolva um programa em Python que verifique a aprovação de um empréstimo bancário para a compra de uma casa. 
# O programa irá solicitar o valor da casa, o salário do comprador e em quantos anos ele vai pagar a casa. 
# Calcule o valor da prestação mensal, sabendo que ela não pode exceder 30% do salário ou então o empréstimo será negado.
# Exemplo:
# Valor da Casa: 150 mil reais
# Salário: 2000 reais
# Anos: 15
# Empréstimo negado

valorCasa = float(input("Digite o valor da casa: "))
salario = float(input("Digite o salario do comprador: "))
anosPagar = int(input("Digite os anos a pagar: "))

prestacao = valorCasa / (anosPagar*12)
valorMaximo = salario * 0.3

if prestacao < valorMaximo:
    print("Empréstimo aceito")
else:
    print("Empréstimo negado")