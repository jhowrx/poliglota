#layout.py
#ver github.com/pyqt/examples

from PyQt5.QtWidgets import *

def acao_btnAcima():
    alert = QMessageBox()
    alert.setText('Clicou Acima')
    alert.exec_()

def acao_btnAbaixo():
    alert = QMessageBox()
    alert.setText('Clicou Abaixo')
    alert.exec_()


#cria uma aplicação gráfica
app = QApplication([])

#cria um layout no formavto de box vertical
layout = QVBoxLayout()
#adiciona componente (widget) -> botão
btnAcima = QPushButton('Acima')
btnAbaixo = QPushButton('Abaixo')

btnAcima.clicked.connect(acao_btnAcima)
btnAbaixo.clicked.connect(acao_btnAbaixo)

layout.addWidget(btnAcima)
layout.addWidget(btnAbaixo)

#obtem a janela da aplicação
window = QWidget()
window.setLayout(layout) #fa com que a janela use o layout box vertical
window.show()

app.exec_()
