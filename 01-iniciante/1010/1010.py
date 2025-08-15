codigoP1, qtdP1, valorP1 = input().split()
codigoP1, qtdP1, valorP1 = int(codigoP1), int(qtdP1), float(valorP1)

codigoP2, qtdP2, valorP2 = input().split()
codigoP2, qtdP2, valorP2 = int(codigoP2), int(qtdP2), float(valorP2)

totalP1 = qtdP1 * valorP1
totalP2 = qtdP2 * valorP2
totalFinal = totalP1 + totalP2

print(f'VALOR A PAGAR: R$ {totalFinal:.2f}')