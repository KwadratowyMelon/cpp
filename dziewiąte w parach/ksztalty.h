#ifndef _zwierzeta_h
#define _zwierzeta_h
#include <iostream>

class punkt {
private:
	float x;
	float y;
public:
	punkt(float = 0, float = 0);
	~punkt();
	float dlugoscOdcinka(punkt*, punkt*);
};

class figura2D {
protected:
	float P; //pole
	float L; //obwód
public:
	figura2D(float = 0, float = 0);
	~figura2D();
	virtual void pole();
	virtual void obwod();
	virtual void druk();
};

class kolo : public figura2D {
protected:
	float R;
public:
	kolo(float = 0, float = 0, float = 0);
	~kolo();
	void pole();
	void obwod();
	void druk();
};
class koloAnalit : public kolo {
private:
	punkt srodek; // obwod dodac z konstruktora klasy nadnadrzednej
	float obw;
public:
	koloAnalit(float = 0, float = 0, punkt* = 0);
	~koloAnalit();
	void pole();
	void obwod();
	void druk();
};

class prostokat : public figura2D {
protected:
	float A; //bok a 
	float B; //bok b
public:
	prostokat(float = 0, float = 0, float = 0, float = 0);
	~prostokat();
	void pole();
	void obwod();
	void druk();
};
class prostokatAnalit : public prostokat {
private:
	punkt a;
	punkt b;
	punkt c;
	punkt d;
public:
	prostokatAnalit(float = 0, float = 0, punkt* = 0, punkt* = 0, punkt* = 0, punkt* = 0);
	~prostokatAnalit();
	void pole();
	void obwod();
	void druk();
};

class trojkat : public figura2D {
protected:
	float A;
	float H;
public:
	trojkat(float = 0, float = 0, float = 0, float = 0);
	~trojkat();
	void pole();
	void obwod();
	void druk();
};
class trojkatAnalit : public trojkat {
private:
	float a;
	float b;
	float c;
public:
	trojkatAnalit(float = 0, float = 0, punkt* = 0, punkt* = 0, punkt* = 0);
	~trojkatAnalit();
	void pole();
	void obwod();
	void druk();
};

#endif
