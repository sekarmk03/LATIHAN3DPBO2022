from sklearn.preprocessing import RobustScaler
from Processor import *
from Disk import *
from Ram import *

class Pc:
    def __init__(self, pObj, dObj, rObj):
        self.__processorObj = pObj
        self.__diskObj = dObj
        self.__ramObj = rObj
        self.__totalPrice = 0

    def setProcessor(self, pObj):
        self.__processorObj = pObj

    def getProcessor(self):
        return self.__processorObj

    def setDisk(self, dObj):
        self.__diskObj = dObj

    def getDisk(self):
        return self.__diskObj

    def setRam(self, rObj):
        self.__ramObj = rObj

    def getRam(self):
        return self.__ramObj

    def setTotalPrice(self, pPrice, dPrice, rPrice):
        self.__totalPrice = pPrice + dPrice + rPrice

    def getTotalPrice(self):
        return self.__totalPrice

    def printPc(self):
        print("-> Processor")
        self.__processorObj.printProcessor()
        print("-> Disk")
        self.__diskObj.printDisk()
        print("-> Ram")
        self.__ramObj.printRam()
        print("-> Total Price")
        self.setTotalPrice(self.__processorObj.getPrice(),
                            self.__diskObj.getPrice(),
                            self.__ramObj.getPrice())
        print("   " + str(self.__totalPrice) + " IDR")