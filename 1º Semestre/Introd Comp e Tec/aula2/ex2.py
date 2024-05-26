# Desenvolva um programa em Python que solicite ao usuário digitar a idade de uma pessoa.
# Após a digitação, o computador deverá verificar se esta pessoa é maior ou menor de idade e mostrar esta informação na tela do computador.
# Exemplos: se o usuário informar que a pessoa tem 17 anos, deverá ser mostrada na tela a mensagem “Pessoa menor de idade”. 
# Se o usuário informar que a pessoa tem 18 anos, deverá ser mostrada na tela a mensagem “Pessoa maior de idade”.

idade = int(input("Digite a idade: "))

if idade >= 18:
    print("Pessoa maior de idade")
else:
    print("Pessoa menor de idade")