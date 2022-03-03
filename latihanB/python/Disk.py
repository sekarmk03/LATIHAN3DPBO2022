class Disk:
    def __init__(self, type="", capacity=0, price=0):
        self.__type = type
        self.__capacity = capacity
        self.__price = price

    def setType(self, type=""):
        self.__type = type

    def getType(self):
        return self.__type

    def setCapacity(self, capacity=0):
        self.__capacity = capacity

    def getCapacity(self):
        return self.__capacity

    def setPrice(self, price=0):
        self.__price = price

    def getPrice(self):
        return self.__price

    def printDisk(self):
        print("Type\t\t: " + self.__type)
        print("Capacity\t: " + str(self.__capacity) + (" TB" if self.__capacity < 100 else " GB"))
        print("Price\t\t: " + str(self.__price) + " IDR")