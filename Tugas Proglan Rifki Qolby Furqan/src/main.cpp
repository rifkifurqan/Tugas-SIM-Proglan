
#include <iostream>
#include <vector>
#include<string>

#include "include/person.hpp"
#include "include/mahasiswa.hpp"
#include "include/dosen.hpp"
#include "include/tendik.hpp"
#include "include/matakuliah.hpp"


using namespace std;

int main()
{
	vector<mahasiswa> recMhs;
	vector<dosen> recDosen;
	vector<tendik> recTendik;
	vector<matakuliah> recMatkul;

	int menu_terpilih;
	int idTendik = 0;
	int idMatkul = 0;

	while(1) {
		cout << "========= SELAMAT DATANG DI UNIVERSITAS IMPIAN ANDA =========" << endl << endl;
		cout << "Data statistik:" << endl;
		cout << "  1. Jumlah Mahasiswa             : " << recMhs.size() << " mahasiswa" << endl;
		cout << "  2. Jumlah Dosen                 : " << recDosen.size() << " dosen " << endl;
		cout << "  3. Jumlah Tenaga Kependidikan   : " << recTendik.size() << " tendik " << endl;
		cout << endl;
		cout << "Menu: " << endl;
		cout << "  1. Tambah Mahasiswa" << endl;
		cout << "  2. Tambah Dosen" << endl;
		cout << "  3. Tambah Mata Kuliah" << endl;
		cout << "  4. Tambah Tenaga Kependidikan" << endl;
		cout << "  5. Tampilkan semua Mahasiswa" << endl;
		cout << "  6. Tampilkan Mata Kuliah" << endl;
		cout << "  7. Tampilkan semua Dosen" << endl;
		cout << "  8. Tampilkan semua Tenaga Kependidikan " << endl;
		cout << "-> ************************************* \n \n ";
		cout << "-> Silahkan memilih salah satu: ";
		cin >> menu_terpilih;

		switch (menu_terpilih) {
			case 1:
				{
					system("cls");
					string id, nama, nrp, departemen;
					int dd, mm, yy, tahunmasuk;
					cout << "Masukkan id          : ";
					cin >> id;
					cout << "Masukkan nama        : ";
					cin.ignore();
                	getline(cin, nama);
					cout << "Masukkan tgl lahir   : ";
					cin >> dd;
					cout << "Masukkan bln lahir   : ";
					cin >> mm;
					cout << "Masukkan thn lahir   : ";
					cin >> yy;
					cout << "Masukkan nrp         : ";
					cin >> nrp;
					cout << "Masukkan departemen  : ";
					cin.ignore();
                	getline(cin, departemen);
					cout << "Masukkan tahun masuk : ";
					cin >> tahunmasuk;

					mahasiswa mhs(id, nama, dd, mm, yy, nrp, departemen, tahunmasuk);
					recMhs.push_back(mhs);
				}
				break;
			case 2:
				{
					system("cls");
					string id, nama, npp, departemen, pendidikan, matkul;
					int dd, mm, yy;
					cout << "Masukkan id: ";
					cin >> id;
					cout << "Masukkan nama: ";
					cin.ignore();
                	getline(cin, nama);
					cout << "Masukkan tgl lahir  : ";
					cin >> dd;
					cout << "Masukkan bln lahir  : ";
					cin >> mm;
					cout << "Masukkan thn lahir  : ";
					cin >> yy;
					cout << "Masukkan npp        : ";
					cin >> npp;
					cout << "Masukkan departemen : ";
					cin.ignore();
                	getline(cin, departemen);
					cout << "Masukkan pendidikan : ";
					cin >> pendidikan;
					cout << "Masukkan Mata Kuliah : ";
					cin.ignore();
                	getline(cin, matkul);

					dosen dsn(id, nama, dd, mm, yy, npp, departemen, pendidikan, matkul);
					recDosen.push_back(dsn);
				}
				break;
			case 3:
			{
				system("cls");
				idMatkul++;
				string id, nama, kode,sks;
				id = idTendik;
				cout << "Masukkan nama : ";
				cin.ignore();
				getline(cin, nama);
				cout << "Masukkan Kode : ";
				cin >> kode;
				cout<< "Masukan SKS : ";
				cin >> sks;
				matakuliah matkul = matakuliah(id, nama, kode, sks);
				recMatkul.push_back(matkul);
			}
				break;
			case 4:
				{
					system("cls");
					string id, nama, npp, unit;
					int dd, mm, yy;
					cout << "Masukkan id        : ";
					cin >> id;
					cout << "Masukkan nama      : ";
					cin.ignore();
                	getline(cin, nama);
					cout << "Masukkan tgl lahir : ";
					cin >> dd;
					cout << "Masukkan bln lahir : ";
					cin >> mm;
					cout << "Masukkan thn lahir : ";
					cin >> yy;
					cout << "Masukkan npp       : ";
					cin >> npp; 
					cout << "Masukkan unit      : ";
					cin >> unit;

					tendik tdk(id, nama, dd, mm, yy, npp, unit);
					recTendik.push_back(tdk);
				}
				break;
			case 5:
				{
					system("cls");
					for (int i = 0; i < recMhs.size(); i++)
					{
						cout << "Nama        : " << recMhs[i].getNama() << endl;
						cout << "Tgl lahir   : " << recMhs[i].getTglLahir();
						cout << "/" << recMhs[i].getBulanLahir();
						cout << "/" << recMhs[i].getTahunLahir() << endl;
						cout << "NRP         : " << recMhs[i].getNRP() << endl;
						cout << "Departemen  : " << recMhs[i].getDepartemen() << endl << endl;
					}
				}
				break;
			case 6:
			{
				system("cls");
				for(int i = 0; i < recMatkul.size(); i++){
					cout << "Nama Mata Kuliah	: " << recMatkul[i].getNama()<<endl;
					cout << "SKS				: " << recMatkul[i].getSKS() << endl;
					cout << "Kode				: " << recMatkul[i].getKode() << endl;
				}
			}
				break;
			case 7:
				{
					system("cls");
					for (int i = 0; i < recDosen.size(); i++)
					{
						cout << "Nama        : " << recDosen[i].getNama() << endl;
						cout << "Tgl lahir   : " << recDosen[i].getTglLahir();
						cout << "/" << recDosen[i].getBulanLahir();
						cout << "/" << recDosen[i].getTahunLahir() << endl;
						cout << "NRP: " << recDosen[i].getNPP() << endl;
						cout << "Pendidikan  : S" << recDosen[i].getPendidikan() << endl;
						cout << "Departemen  : " << recDosen[i].getDepartemen() << endl;
						cout << "Mata Kuliah  : " << recDosen[i].getMatkul() << endl << endl;
					}
				}
				break;
			case 8:
				{
					system("cls");
					for (int i = 0; i < recTendik.size(); i++)
					{
						cout << "Nama		: " << recTendik[i].getNama() << endl;
						cout << "Tgl lahir  : " << recTendik[i].getTglLahir();
						cout << "/" << recTendik[i].getBulanLahir();
						cout << "/" << recTendik[i].getTahunLahir() << endl;
						cout << "NRP        : " << recTendik[i].getNPP() << endl;
						cout << "Unit       : " << recTendik[i].getUnit() << endl;
					}
				}
				break;

			
			
			
		}
	}

	return 0;
}

