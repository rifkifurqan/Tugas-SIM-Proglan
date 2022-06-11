#include <iostream>

#include "include/dosen.hpp"


dosen::dosen(std::string id, std::string nama, int dd, int mm, int yy, std::string npp, std::string departemen, std::string pendidikan, std::string matkul)
		: person(id, nama, dd, mm, yy), npp(npp), departemen(departemen), pendidikan(pendidikan), matkul(matkul)
{
}

void dosen::setPendidikan(std::string pendidikan)
{
	this->pendidikan = pendidikan;
}

std::string dosen::getPendidikan()
{
	return this->pendidikan;
}

std::string dosen::getDepartemen()
{
	return this->departemen;
}

std::string dosen::getNPP()
{
	return this->npp;
}

std::string dosen::getMatkul()
{
	return this->matkul;
}
