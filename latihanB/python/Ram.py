class Ram:
    def __init__(self, capacity=0, price=0):
        self.__capacity = capacity
        self.__price = price

    def setCapacity(self, capacity=0):
        self.__capacity = capacity

    def getCapacity(self):
        return self.__capacity
    
    def setPrice(self, price=0):
        self.__price = price

    def getPrice(self):
        return self.__price

    def printRam(self):
        print("Capacity\t: " + str(self.__capacity) + " GB")
        print("Price\t\t: " + str(self.__price) + " IDR")