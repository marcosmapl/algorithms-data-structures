__author__ = "Marcos A. P. de Lima"
__copyright__ = "Copyright 2018"
__license__ = "GNU Public General License"
__version__ = "3.0"
__email__ = "marcos.lima@icomp.ufam.edu.br"
__status__ = "Published"

def computador_escolhe_jogada(n,m):
  jogada = m
  if (n % (m+1)):
    jogada = (n % (m+1))
  print('\nComputer decided to remove {pieces}.'.format(pieces='one piece' if jogada == 1 else str(jogada)+' pieces'))
  return jogada

def usuario_escolhe_jogada(n,m):
  jogada = 0
  while (jogada > m) or (jogada < 1):
    jogada = int(input('\nHow many pieces would you like to remove? '))
    if (jogada > m) or (jogada < 1):
      print('\nOops! Invalid quantity! Try again.')
  print('\nYou removed {pieces}.'.format(pieces='one piece' if jogada == 1 else str(jogada)+' pieces'))
  return jogada

def partida():
  n = int(input('\nHow many pieces in this game? '))
  m = int(input('Limit of removed pieces per move? '))
  
  # vez 1 - player turn
  # vez 0 - computer turn
  vez = 0

  if (m > n) or (n % (m+1)):
    print('\nComputer starts the game!')
  else:
    print('\nYou start the game!')
    vez = not vez
    
  while (n > 0):
    if (vez):      
      jogada = usuario_escolhe_jogada(n,m)      
    else:
      jogada = computador_escolhe_jogada(n,m)
    n = n - jogada  
    vez = not vez
    if (n > 0):
      print('Now {pieces} in game.'.format(pieces='there is only one piece' if n == 1 else 'there are '+str(n)+' pieces'))
  
  # if the game ends with player turn, computer did last move and wins.
  # otherwise, player did last move and wins
  if (vez):
    print('The Match is Over! Computer wins!\n')
  else:
    print('The Match is Over! You wins!\n')
    
  return vez


def campeonato():
  print('\nYou choose 3 turn championship!\n')
  pontosCPU = 0
  pontosJogador = 0
  for i in range(1,4):
    print('**** Round {} ****'.format(i))
    # partida returns zero if player wins
    # and one for computer wins
    if(partida()):
      pontosCPU +=1
    else:
      pontosJogador += 1
  print('**** End of championship! ****\n')
  print('Game Score: You {} x {} Computer'.format(pontosJogador,pontosCPU))
  return 0

print()
print('Welcome to Nim Game! Choose:')
escolha = int(input('\n1 - Play one match\n2 - Play 3 Round Championship '))
if (escolha == 1):
  partida()
elif (escolha == 2):
  campeonato()
