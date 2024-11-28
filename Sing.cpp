#include "Sing.h"
#include <iostream>

Sing* Sing::instance = nullptr;

Sing::Sing() : id(0)
{}


Sing::Sing(int id)
{
	this->id = id;
}

/*
Sing::Sing(const Sing& s)
{
	this->id = s.id;
}


Sing& Sing::operator=(const Sing& s)
{
	this->id = s.id;
	return *this;
}*/

Sing& Sing::creation(int id)
{
	if (instance==nullptr)
	{
	   instance = new Sing(id);
	}
	return *instance;
}

void Sing::afficher() const
{
	cout << "Instance Singleton, ID: " << id << endl;
}


Sing::~Sing() {
	cout << "Destruction de l'instance Singleton." << endl;
	instance = nullptr;
}


