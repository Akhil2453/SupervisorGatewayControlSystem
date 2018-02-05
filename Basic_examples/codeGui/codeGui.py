import sys
from PyQt5 import QtCore, QtGui, QtWidgets

app = QtWidgets.QApplication(sys.argv)  #crete an object of class QApplication
window = QtWidgets.QWidget()			#create an object of class QWidget for window

window.setGeometry(50,50,500,300)		#window start position on the screen, and total window size
window.setWindowTitle("First GUI")		#set window title
window.setWindowIcon(QtGui.QIcon('index.jpg'))

window.show()							#show the window created
sys.exit(app.exec_())					#exit the window on pressing the close button