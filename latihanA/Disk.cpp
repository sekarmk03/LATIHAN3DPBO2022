#include <bits/stdc++.h>

using namespace std;

class Disk {
    private:
        string type;
        int capacity;
        int price;
    
    public:
        Disk() {
            this->type = "";
            this->capacity = 0;
            this->price = 0;
        }

        Disk(string type, int capacity, int price) {
            this->type = type;
            this->capacity = capacity;
            this->price = price;
        }

        void setType(string type) {
            this->type = type;
        }

        string getType() {
            return this->type;
        }

        void setCapacity(int capacity) {
            this->capacity = capacity;
        }

        int getCapacity() {
            return this->capacity;
        }

        void setPrice(int price) {
            this->price = price;
        }

        int getPrice() {
            return this->price;
        }

        void printDisk() {
            cout << "Type\t\t: " << this->type << endl;
            cout << "Capacity\t: " << this->capacity << (this->capacity < 100 ? " TB" : " GB") << endl;
            cout << "Price\t\t: " << this->price << " IDR" << endl;
        }

        ~Disk() { }
};