#include <bits/stdc++.h>

using namespace std;

class Ram {
    private:
        int capacity;
        int price;
    
    public:
        Ram() {
            this->capacity = 0;
            this->price = 0;
        }

        Ram(int capacity, int price) {
            this->capacity = capacity;
            this->price = price;
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

        void printRam() {
            cout << "Capacity\t: " << this->capacity << " GB" << endl;
            cout << "Price\t\t: " << this->price << " IDR" << endl;
        }

        ~Ram() { }
};