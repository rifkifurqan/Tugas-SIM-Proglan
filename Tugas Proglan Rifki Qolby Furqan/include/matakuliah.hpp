#ifndef _MATA_KULIAH_HPP_
#define _MATA_KULIAH_HPP_

#include<iostream>

class matakuliah {
    private:
    std::string id;
    std::string nama;
    std::string kode;
    std::string sks;

    public:
    matakuliah(std::string id, std::string nama, std::string kode, std::string sks);

    std::string getId();
    std::string getNama();
    std::string getKode();
    std::string getSKS();
};

#endif