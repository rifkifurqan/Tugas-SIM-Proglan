#include "include/matakuliah.hpp"

matakuliah::matakuliah(std::string id, std::string nama, std::string kode, std::string SKS)
    : id(id), nama(nama), kode(kode), sks(sks)
{
}

std::string matakuliah::getId(){
    return this->id;
}

std::string matakuliah::getNama(){
    return this->nama;
}

std::string matakuliah::getKode(){
    return this->kode;
}

std::string matakuliah::getSKS(){
    return this->sks;
}