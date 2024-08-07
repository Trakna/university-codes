numero = int(input("Digite o numero: "))

n = str(numero)
Uni = numero // 1 % 10
dez = numero // 10 % 10
cent = numero // 100 % 10
mil = numero // 1000 % 10

print(f"Analisando o número {numero}")
print(f"Unidade: {Uni}")
print(f"Dezena: {dez}")
print(f"Centena: {cent}")
print(f"Milhar: {mil}")
