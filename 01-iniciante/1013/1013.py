A,B,C = map(int,input().split())

maiorAB = (A + B +abs(A-B))/2
maiorFinal = (maiorAB + C +abs(maiorAB-C))/2

print(f'{maiorFinal:.0f} eh o maior')