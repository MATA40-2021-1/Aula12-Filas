/* Classe cNoSimpEnc */ 

#pragma once

#include<iostream>

class cNoSimpEnc {
  private: 
    char dado;
    cNoSimpEnc* prox;

  public:
  	cNoSimpEnc();
    cNoSimpEnc(char dado);
    
  	~cNoSimpEnc();

  	void setDado(char d);
  	void setProx(cNoSimpEnc* p);
  	char getDado();
  	cNoSimpEnc* getProx();
};
