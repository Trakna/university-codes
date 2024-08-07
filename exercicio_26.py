#Faça um programa que leia uma frase pelo teclado e mostre quantas vezes aparece a letra “A”
#em que posição ela aparece a primeira vez e em que posição ela aparece a última vez.

frase_a = str(input("Digite uma frase: ")).upper()

print(f"A letra A aparece {frase_a.count("A")} vezes na sua frase")
print(f"A primeira letra A apareceu na posição {frase_a.find("A")+1}")
print(f"A última letra A que aparece na sua frase está em {frase_a.rfind("A")+1}")