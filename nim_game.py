def computador_escolhe_jogada(n,m):
  jogada = m
  elif (n % (m+1)):
    jogada = (n % (m+1))
  print('\nO computador tirou {pieces}.'.format(pieces='uma peça' if jogada == 1 else str(jogada)+' peças'))
  return jogada

def usuario_escolhe_jogada(n,m):
  jogada = m+1
  while (jogada > m) and (jogada < 1):
    jogada = int(input('\nQuantas peças você vai tirar? '))
    if (jogada > m):
      print('\nOops! Jogada inválida! Tente de novo.')
  print('\nVocê tirou {pieces}.'.format(pieces='uma peça' if jogada == 1 else str(jogada)+' peças'))
  return jogada

def partida():
  n = int(input('Quantas peças? '))
  m = int(input('Limite de peças por jogada? '))
  vez = 0
  if (m > n) or (n % (m+1)):
    print('\nComputador começa!')
  else:
    print('\nVocê começa!')
    vez = not vez
  while (n > 0):
    if (vez):      
      jogada = usuario_escolhe_jogada(n,m)
      n = n - jogada
      if (n > 0):
        print('Agora resta apenas {pieces} no tabuleiro.'.format(pieces='uma peça' if n == 1 else str(n)+' peças'))
        vez = not vez
    else:
      jogada = computador_escolhe_jogada(n,m)
      n = n - jogada
      if (n > 0):
        print('Agora resta apenas {pieces} no tabuleiro.'.format(pieces='uma peça' if n == 1 else str(n)+' peças'))
        vez = not vez
  if (vez):
    print('Fim do jogo! Você ganhou!\n')
  else:
    print('Fim do jogo! O computador ganhou!\n')
  return vez


def campeonato():
  print('\nVocê escolheu um campeonato!\n')
  pontosCPU = 0
  pontosJogador = 0
  for i in range(1,4):
    print('**** Rodada {} ****\n'.format(i))
    if(partida()):
      pontosJogador += 1
    else:
      pontosCPU +=1
  print('**** Final do campeonato! ****\n')
  print('Placar: Você {} x {} Computador'.format(pontosJogador,pontosCPU))
  return 0

print()
print('Bem-vindo ao jogo do NIM! Escolha:')
escolha = int(input('\n1 - para jogar uma partida isolada\n2 - para jogar um campeonato '))
if (escolha == 1):
  partida()
elif (escolha == 2):
  campeonato()