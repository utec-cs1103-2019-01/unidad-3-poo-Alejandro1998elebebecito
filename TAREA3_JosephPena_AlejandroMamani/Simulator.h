//
// Created by albin on 03/05/2019.
//

#ifndef TAREA3_JOSEPHPENA_ALEJANDROMAMANI_SIMULATOR_H
#define TAREA3_JOSEPHPENA_ALEJANDROMAMANI_SIMULATOR_H

#include "Charge.h"
//class Charge;
//struct Position;
#include <vector>
class Simulator
{
private:
    int columns;
    int rows;
    std::vector<Charge> list_of_charge;
    inline bool fit_on_rows(int x);
    inline bool fit_on_columns(int y);
    inline bool fit_on_grid(Charge new_charge);

public:
    Simulator(int columns, int rows);
    void insert_charge(Charge new_charge);
    double get_potential_at(Position position);
//    TODO: Fill random is not necessary yet
    void fill_random(int quantity);
};



#endif //TAREA3_JOSEPHPENA_ALEJANDROMAMANI_SIMULATOR_H
