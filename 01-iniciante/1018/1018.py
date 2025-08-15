n = int(input())
valorAux = n 

nota100 = nota50 = nota20 = nota10 = nota5 = nota2 = nota1 = 0

while valorAux > 0:
    if valorAux >= 100:
        nota100 += 1
        valorAux -= 100
    elif valorAux >= 50:
        nota50 += 1
        valorAux -= 50
    elif valorAux >= 20:
        nota20 += 1
        valorAux -= 20
    elif valorAux >= 10:
        nota10 += 1
        valorAux -= 10
    elif valorAux >= 5:
        nota5 += 1
        valorAux -= 5
    elif valorAux >= 2:
        nota2 += 1
        valorAux -= 2
    else:  
        nota1 += 1
        valorAux -= 1
        
print(f"{n}");
print(f"{nota100} nota(s) de R$ 100,00")
print(f"{nota50} nota(s) de R$ 50,00")
print(f"{nota20} nota(s) de R$ 20,00")
print(f"{nota10} nota(s) de R$ 10,00")
print(f"{nota5} nota(s) de R$ 5,00")
print(f"{nota2} nota(s) de R$ 2,00")
print(f"{nota1} nota(s) de R$ 1,00")