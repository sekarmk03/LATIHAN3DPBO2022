#include <bits/stdc++.h>
#include "Pc.cpp"

using namespace std;

int main() {
    int n = 0;

    cout << "Jumlah PC : ";
    cin >> n;

    vector<Pc> pcs;

    for (int i = 0; i < n; i++) {
        string processorName = "", diskType = "";
        int processorPrice = 0, diskPrice = 0, ramPrice = 0, diskCapacity = 0, ramCapacity = 0;
        
        cout << "-- Input PC " << i+1 << " --" << endl;
        cout << "Processor Name: ";
        cin >> processorName;
        cout << "Processor Price: ";
        cin >> processorPrice;
        cout << "Disk Type: ";
        cin >> diskType;
        cout << "Disk Capacity: ";
        cin >> diskCapacity;
        cout << "Disk Price: ";
        cin >> diskPrice;
        cout << "Ram Capacity: ";
        cin >> ramCapacity;
        cout << "Ram Price: ";
        cin >> ramPrice;

        Processor processorObj(processorName, processorPrice);
        Disk diskObj(diskType, diskCapacity, diskPrice);
        Ram ramObj(ramCapacity, ramPrice);

        Pc pcObj(processorObj, diskObj, ramObj);
        
        pcs.push_back(pcObj);
    }
    
    cout << "++ Data PCs ++" << endl;
    for (int i = 0; i < pcs.size(); i++) {
        cout << "[ PC " << i+1 << " ]" << endl;
        pcs[i].printPc();
        cout << endl;
    }
    
    return 0;
}