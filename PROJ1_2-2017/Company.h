#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <map>

#include "Line.h"
#include "Driver.h"
#include "Bus.h"

using namespace std;

class Company {
private:
	string nome;
	vector<Driver> condutores;
	vector<Line> linhas;
	string fichCondutores;
	string fichLinhas;
	vector<Bus> autocarros;
public:
	Company(string nome, string fichCondutores, string fichLinhas);
	Company(vector<Bus> vector);
	// metodos get
	string getFichDrivers() const;
	string getFichLinhas() const;
	string getNome() const;
	vector<Line> Company::getLines() const;
	vector<Driver> Company::getDrivers() const;
	vector<Bus> Company::getAutocarros() const;
	// metodos set
	void setCondutores(vector<Driver> vector);
	void setLinhas(vector<Line> vector);
	void setAutocarros(vector<Bus> vector);
	// outros metodos
	void distribuiServico(); // funcao que implementa a afectacao de servico
};