//
// Created by Jan Woźniak on 07.10.2018.
//

#ifndef PEA_DATALOADER_H
#define PEA_DATALOADER_H

#include <fstream>

class DataLoader {
public:
    DataLoader();

    ~DataLoader();

    unsigned GetGraphSizeFromFile();

    void AddEdgesFromFileToGraph(unsigned **graph, unsigned graphSize);

    unsigned GetUnsignedFromFile();

private:
    std::ifstream myFile_;
    std::string line_of_file_;
};


#endif //PEA_DATALOADER_H
