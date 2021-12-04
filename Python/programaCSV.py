#programaCSV.py

import csv


def lerCSV():
    arquivo = open('planilha.csv')
    tabela = csv.reader(arquivo)
    for linha in tabela:
        print(linha[0])

    arquivo.close()

def gravarCSV():
    tabela = (('PRODUTO','UNIDADE','PREÇO UNITÁRIO',
               'QUANTIDADE ESTOQUE','VALOR TOTAL'),
              ('Açúcar','2kg', 3.59, 10, 35.90),
               ('Biscoito','200 Gr', 1.19, 10, 11.90)
              )
    arquivo = open('planilha.csv', 'w', newline='')
    saida = csv.writer(arquivo, delimiter=';') #delmitmer(separar em counas exel)
    saida.writerows(tabela)
    arquivo.close()

#lerCSV()
gravarCSV()
