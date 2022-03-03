from Pc import *

list = []

n = 0

n = int(input("Jumlah PC: "))

for i in range(0, n):
    print("-- Input PC " + str(i+1) + " --")
    processorName = input("Processor Name: ")
    processorPrice = int(input("Processor Price: "))
    diskType = input("Disk Type: ")
    diskCapacity = int(input("Disk Capacity: "))
    diskPrice = int(input("Disk Price: "))
    ramCapacity = int(input("Ram Capacity: "))
    ramPrice = int(input("Ram Price: "))

    processorObj = Processor(processorName, processorPrice)
    diskObj = Disk(diskType, diskCapacity, diskPrice)
    ramObj = Ram(ramCapacity, ramPrice)
    pcObj = Pc(processorObj, diskObj, ramObj)

    list.append(pcObj)


print("++ Data PCs ++")
for i in range(0, n):
    print("[ PC " + str(i+1) + " ]")
    list[i].printPc()