n = int(input())
valorAux = n 

ano = mes = dia = 0

while valorAux >= 0:
    if valorAux >= 365:
        ano += 1
        valorAux -= 365
    elif valorAux >= 30:
        mes += 1
        valorAux -= 30
    else:
        dia = valorAux
        break
        
print(f"{ano} ano(s)")
print(f"{mes} mes(es)")
print(f"{dia} dia(s)")