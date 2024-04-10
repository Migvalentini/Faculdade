valorCasa = float(input("Digite o valor da casa: "))
salario = float(input("Digite o salario do comprador: "))
anosPagar = int(input("Digite os anos a pagar: "))

prestacao = valorCasa / (anosPagar*12)
valorMaximo = salario * 0.3

if prestacao < valorMaximo:
    print("Empréstimo aceito")
else:
    print("Empréstimo negado")