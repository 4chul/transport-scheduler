#include "transport.h"

bool TransportScheduler::isClosed(int supply[], int demand[], int numWarehouses, int numConsumers) {
    int totalSupply = 0, totalDemand = 0;
    for (int i = 0; i < numWarehouses; i++) totalSupply += supply[i];
    for (int j = 0; j < numConsumers; j++) totalDemand += demand[j];
    return totalSupply == totalDemand;
}

double TransportScheduler::calculateCost(int supply[], int demand[], double costMatrix[][15], int numWarehouses, int numConsumers) {
    double totalCost = 0.0;
    //  logika rascheta min elementaа
    return totalCost;
}
