import PySimpleGUI as sg
import random
import time


sg.theme('DarkGreen')
def menu():
    numeroBombas = 0
    
    layout = [[sg.Text("Bem vindo(a) ao Campo Minado")],
        [sg.Text('Escolha a Dificuldade:')],
        [sg.Listbox(["Iniciante (10 bombas)","Intermediário (20 bombas)","Avançado (30 bombas)"],size=(24,0),key="dif",no_scrollbar = True)],
        [(sg.Button('Iniciar'))]
        ]
    win1 = sg.Window('Campo Minado', layout)
    col = []
    def proximidade():
        co = col
        cont = 0
        co[0] -= 1
        col[1] -= 1
        if col[0] >= 0 and col[1] >= 0 and col[0] < 10 and col[1] < 10:
            if minas[co[0]][co[1]] == 1:
                cont += 1
        for i in range(2):
            co[1] += 1
            if col[0] >= 0 and col[1] >= 0 and col[0] < 10 and col[1] < 10:
                if minas[co[0]][co[1]] == 1:
                    cont += 1
        for i in range(2):
            co[0] += 1
            if col[0] >= 0 and col[1] >= 0 and col[0] < 10 and col[1] < 10:
                if minas[co[0]][co[1]] == 1:
                    cont += 1
        for i in range(2):
            co[1] -= 1
            if col[0] >= 0 and col[1] >= 0 and col[0] < 10 and col[1] < 10:
                if minas[co[0]][co[1]] == 1:
                    cont += 1
        co[0] -= 1
        if col[0] >= 0 and col[1] >= 0 and col[0] < 10 and col[1] < 10:
            if minas[co[0]][co[1]] == 1:
                cont += 1
        return cont
    denovo = False
    condicao= False
    while True:
        events, values = win1.read()

        if events == sg.WIN_CLOSED:
            break
        
        if events == 'Iniciar':
            condicao = True
            dificuldade = values["dif"]
            if dificuldade == ["Iniciante (10 bombas)"]:
                numeroBombas = 10
                break
            elif dificuldade == ["Intermediário (20 bombas)"]:
                numeroBombas = 20
                break
            elif dificuldade == ["Avançado (30 bombas)"]:
                numeroBombas = 30
                break
        if numeroBombas == 0:
            sg.Popup('Escolha uma dificuldade.\n\nIniciante (10 bombas)\nIntermediário (20 bombas)\nAvançado (30 bombas)\n')

    win1.close()
    parada = False
    def tempo():
        return int(round(time.time() * 100))
    agora = 0
    comeco = tempo()
    layout2 = []

    for i in range(10):
        layout2.append([])

    for i in range(10):
        for y in range(10):
            layout2[i] = []

    for i in range(10):
        for y in range(10):
            layout2[i].append(sg.Button('?', size=(6, 3), pad = (2 , 2), key = (str(i) + str(y))))
    
    layout2.append([sg.Text('', key='timer',text_color='white')])
    
    janela2 = sg.Window('Campo Minado', layout2)
    buraco = 0
    minas = [[0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
             [0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
             [0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
             [0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
             [0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
             [0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
             [0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
             [0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
             [0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
             [0, 0, 0, 0, 0, 0, 0, 0, 0, 0]]

    y = 0
    while (y < numeroBombas):
        col = [random.randint(0, 9), random.randint(0, 9)]
        if minas[col[0]][col[1]] == 0:
            minas[col[0]][col[1]] = 1
            y += 1
    winner = False
    print()
    for mina in minas:
        print(mina)

    if condicao:
        while True:
            events, values = janela2.read(timeout=10)

            agora = tempo() - comeco
            janela2['timer'].update('{:02d}:{:02d}:{:02d}'.format((agora // 100) // 60, (agora // 100) % 60, agora % 100))

            if events == sg.WIN_CLOSED:
                break

            for i in range(100):
                if i < 10:
                    y = '0' + str(i)
                else:
                    y = str(i)
            
                if events == y:
                    col = [int(y[0]), int(y[1])]
                    if minas[col[0]][col[1]] == 1:
                        janela2[y].update(str('X'), button_color=('white','red'))
                        parada = True
                        break
                    else:
                        minas[col[0]][col[1]] = 2
                        janela2[y].update(str(proximidade()), button_color=('white','lightblue'), disabled=True, disabled_button_color=('black', 'black'))
                        buraco += 1

                    if buraco == 100 - numeroBombas:
                        winner = True
                        break
            if parada:
                break

            if winner:
                break
    print()
    for mina in minas:
        print(mina)

    if parada:
        sg.Popup('Você perdeu, quer tentar de novo?')
        janela2.close()
        menu()
    layoutwin = [[sg.Text('VOCÊ GANHOU O JOGO! PARABÉNS!')], [sg.Button('Jogar de novo')]]
    jan = sg.Window('Vencedor', layoutwin)

    if winner:
        while True:
            events, values = jan.read()
        
            if events == sg.WIN_CLOSED:
                break

            if events == 'Jogar de novo':
                denovo = True
                break
    
    if denovo:
        denovo = False
        janela2.close()
        jan.close()
        menu()

    print()
    for mina in minas:
        print(mina)
menu()
