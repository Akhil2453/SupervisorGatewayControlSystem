import sys
from PyQt5 import QtGui, QtCore, QtWidgets

class Window(QtWidgets.QWidget):

	def __init__(self):
		super(Window, self).__init__()
		self.setGeometry(50,50,500,500)
		self.setWindowTitle("Akhil")
		self.setWindowIcon(QtGui.QIcon('index.jpg'))
		self.home()

	def home(self):
		btn = QtWidgets.QPushButton("quit", self)
		btn.clicked.connect(QtCore.QCoreApplication.instance().quit)
		btn.resize(100,50)
		btn.move(200,200)
		self.show()

def run():
	app = QtWidgets.QApplication(sys.argv)
	GUI = Window()
	sys.exit(app.exec_())


run()