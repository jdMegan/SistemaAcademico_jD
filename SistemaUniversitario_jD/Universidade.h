#pragma once

class Universidade
{
private:
	char nome[30];
public:

	// Construtor
	Universidade( const char* n = "");
	// Destrutor
	~Universidade();
	void setNome( const char* n);
	char* getNome();
};