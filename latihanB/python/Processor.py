class Processor:
    def __init__(self, name="", price=0):
        self.__name = name
        self.__price = price

    def setName(self, name=""):
        self.__name = name

    def getName(self):
        return self.__name

    def setPrice(self, price=0):
        self.__price = price

    def getPrice(self):
        return self.__price

    def printProcessor(self):
        print("Name\t\t: " + self.__name)
        print("Price\t\t: " + str(self.__price) + " IDR")

    