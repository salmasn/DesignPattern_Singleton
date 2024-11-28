#pragma once
#include <iostream>
using namespace std;

class Sing
{
private:
	static Sing* instance;
	int id;
	Sing();
	Sing(int id);
	Sing(const Sing& s)=delete;
    Sing& operator=(const Sing& s)=delete;
public:
	
	static Sing& creation(int id);
	void afficher() const;
	~Sing();
};
