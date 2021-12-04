#bancoDados.py

import sqlite3

#cria a conecção com o banco de dados
#obs: o arquivo do banco de dados deve estar na mesma pasta do programa
con = sqlite3.connect('bancodados.db')

#cria um cursor
cur = con.cursor()


def criar_tabela():
    #define uma tabela para o banco
    sql = 'create table contato'\
          '(id integer primary key, '\
          'nome varchar(100), '\
          'email varchar(100), '\
          'telefone varchar(14) )'

    #cria a tabela
    cur.execute(sql)

def inserir_dados():
    #lista de registros
    recset = [('Joao da Silva', 'joao@gmail.com', '(42)3333-4444'),
              ('Lui Carlos', 'luicarlos@gmail.com', '(42)5555-7777'),
              ('Maria Padilha', 'padilha@hotmail.com', '(42)3333-8888')]


    #sentença para inserir os registros
    sql = 'insert into contato values (null, ?, ?, ?)'

    #insere os registros
    for rec in recset:
        cur.execute(sql, rec)

    #confirma (comita) a transação
        con.commit()

def listar_dados():
    #seleciona todos os registros
    cur.execute('select * from contato')

    #recupera os resultados
    recset=cur.fetchall() #fetch = buscar

    #mostra registros
    for rec in recset:
        print('ID: %d \t Nome: %-12s \t Email: %-15s \t Fone: %-15s' % rec)
        
#criar_tabela() 
#inserir_dados()    
listar_dados()
