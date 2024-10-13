#include <iostream>
#include "transport.h"

int main() {
    // �Dannie
    int supply[] = {20, 30, 50}; // СSklad
    int demand[] = {30, 20, 50}; // � Potrebitiliели
    double costMatrix[3][15] = {{1.5, 2.5, 3.0}, {2.0, 1.0, 1.5}, {3.0, 2.0, 2.5}};
    
    TransportScheduler scheduler;

    if (scheduler.isClosed(supply, demand, 3, 3)) {
        std::cout << "Zadacha zamknuta. Raschet stoimosti dostavki" << std::endl;
        double cost = scheduler.calculateCost(supply, demand, costMatrix, 3, 3);
        std::cout << "Obshaya stoimost dostavki: " << cost << std::endl;
    } else {
        std::cout << "Zadacha ne zamknuta." << std::endl;
    }

    return 0;
}
