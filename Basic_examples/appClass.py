import sys
from PyQt5 import QtGui, QtCore, QtWidgets

class Window(QtWidgets.QWidget):

	def __init__(self):
		super(Window, self).__init__()
		self.setGeometry(50,50,500,500)
		self.setWindowTitle("Akhil")
		self.setWindowIcon(QtGui.QIcon('index.jpg'))
		self.show()


app = QtWidgets.QApplication(sys.argv)
GUI = Window()
sys.exit(app.exec_())