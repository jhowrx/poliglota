#interfaceQt.py


#instalar pyqt5
#script> pip install pyqt5

from os.path import exists
from PyQt5.QtWidgets import *
from PyQt5.QtSql import *
import sys

#Acessa o 'bancodados.db' criado no exercicio anterior (bancoDados)

if not exists('bancodados.db'):
    print('bancodados.db não existe')
    sys.exit()

#cria a aplicação gráfica
app = QApplication([])

#representa o banco
db = QSqlDatabase.addDatabase('QSQLITE')
db.setDatabaseName('bancodados.db')
db.open()

#representa os dados do banco
model = QSqlTableModel(None, db)
model.setTable('contato')
model.select()

#representa a parte grafica da aplicação
view = QTableView() #cria uma tabela grafica (componete da aplicação)
view.setModel(model) #atribui os dados carregados do banco
view.show()          #exibe dados na view

#executa aplicação
app.exec_()
