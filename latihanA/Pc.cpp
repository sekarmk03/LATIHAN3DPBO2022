#include <bits/stdc++.h>
#include "Processor.cpp"
#include "Disk.cpp"
#include "Ram.cpp"

using namespace std;

class Pc {
    private:
        Processor processorObj;
        Disk diskObj;
        Ram ramObj;
        int totalPrice;

    public:
        Pc() { }

        Pc(Processor pObj, Disk dObj, Ram rObj) {
            this->processorObj = pObj;
            this->diskObj = dObj;
            this->ramObj = rObj;
            this->totalPrice = 0;
        }

        void setProcessor(Processor pObj) {
            this->processorObj = pObj;
        }

        Processor getProcessor() {
            return this->processorObj;
        }

        void setDisk(Disk dObj) {
            this->diskObj = dObj;
        }

        Disk getDisk() {
            return this->diskObj;
        }

        void setRam(Ram rObj) {
            this->ramObj = rObj;
        }
        Ram getRam() {
            return this->ramObj;
        }

        void setTotalPrice(int pPrice, int dPrice, int rPrice) {
            this->totalPrice = pPrice + dPrice + rPrice;
        }

        int getTotalPrice() {
            return this->totalPrice;
        }

        void printPc() {
            cout << "-> Processor" << endl;
            this->processorObj.printProcessor();
            cout << "-> Disk" << endl;
            this->diskObj.printDisk();
            cout << "-> Ram" << endl;
            this->ramObj.printRam();
            this->setTotalPrice(this->processorObj.getPrice(), this->diskObj.getPrice(), this->ramObj.getPrice());
            cout << "-> Total Price" << endl;
            cout << "   " << this->totalPrice << " IDR" << endl;
        }
        
        ~Pc() { }
};