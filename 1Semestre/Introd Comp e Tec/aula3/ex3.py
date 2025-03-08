# Desenvolva um programa em Python que solicite ao usuário digitar a idade de uma pessoa. 
# Após a digitação, o computador deverá verificar se esta pessoa é maior ou menor de idade e mostrar esta informação na tela do computador.
# Ainda verifique se a pessoa pode ou não votar.
# Exemplo:
# Se o usuário informar que a pessoa tem 17 anos, deverá ser mostrada na tela a mensagem “Pessoa menor de idade e pode votar”. 
# Se o usuário informar que a pessoa tem 18 anos, deverá ser mostrada na tela a mensagem “Pessoa maior de idade e pode votar”. 
# Caso a idade informada seja 15 anos a mensagem mostrada deve ser apenas “Pessoa menor de idade”.

idade = int(input("Digite a idade: "))

if idade >= 18:
    print("Maior de idade!")
    if idade <= 70:
        print("Você pode votar!")
    else:
        print("Você não pode votar!")
else:
    print("Menor de idade!")
    if idade >= 16:
        print("Você pode votar!")
    else:
        print("Você não pode votar!")