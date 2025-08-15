n = int(input())
valorAux = n 

horas = minutos = segundos = 0

while valorAux >= 0:
    if valorAux >= 3600:
        horas += 1
        valorAux -= 3600
    elif valorAux >= 60:
        minutos += 1
        valorAux -= 60
    else:
        segundos = valorAux
        break
        
print(f"{horas}:{minutos}:{segundos}");