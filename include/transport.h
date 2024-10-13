// include/transport.h
#ifndef TRANSPORT_H
#define TRANSPORT_H

//  Class dlya planirovki perevozokевозок
class TransportScheduler {
public:
    //  Metod dlya proverki zamknutostiи
    bool isClosed(int supply[], int demand[], int numWarehouses, int numConsumers);
    // ��Metod dlya raschetaи
    double calculateCost(int supply[], int demand[], double costMatrix[][15], int numWarehouses, int numConsumers);
};

#endif
