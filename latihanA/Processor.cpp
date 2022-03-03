#include <bits/stdc++.h>

using namespace std;

class Processor {
    private:
        string name;
        int price;
    
    public:
        Processor() {
            this->name = "";
            this->price = 0;
        }

        Processor(string name, int price) {
            this->name = name;
            this->price = price;
        }

        void setName(string name) {
            this->name = name;
        }

        string getName() {
            return this->name;
        }

        void setPrice(int price) {
            this->price = price;
        }

        int getPrice() {
            return this->price;
        }

        void printProcessor() {
            cout << "Name\t\t: " << this->name << endl;
            cout << "Price\t\t: " << this->price << " IDR" << endl;
        }

        ~Processor() { }
};