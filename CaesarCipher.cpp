#include "CaesarCipher.h"
#include "CaesarCipherList.h"
#include <cstdlib>
#include <iostream>
#include <string>
#include <cstdio>
using namespace std;
/*
 * CaesarCipher.cpp
 *
 *  Created on: Nov 16, 2019
 *      Author: Steve Cook
 */

CaesarCipher :: CaesarCipher(){
	shift = getShift();
}

CaesarCipher :: CaesarCipher(const CaesarCipher & cc){
	shift = cc.shift;
}

int CaesarCipher :: getShift(){
	int random = rand();
	random = random %(OFFSET_MAX - OFFSET_MIN);
	return random;
}
string CaesarCipher :: encrypt(string s){
	return encryptDecrypt(s, true);
}

string CaesarCipher :: decrypt(string s){
	return encryptDecrypt(s, false);
}

CaesarCipher& CaesarCipher :: operator = (const CaesarCipher & cc){
	this->shift = cc.shift;
	return *this;
}
CaesarCipher CaesarCipher :: operator + (const CaesarCipher & cc){
	int newShift = this->shift + cc.shift;
	CaesarCipher cc2 = CaesarCipher();
	cc2.shift = newShift%(OFFSET_MAX - OFFSET_MIN);
	return cc2;
}
bool CaesarCipher :: operator == (const CaesarCipher & cc){
	return this->shift == cc.shift;
}
bool CaesarCipher :: operator < (const CaesarCipher & cc){
	return this->shift < cc.shift;
}
bool CaesarCipher :: operator > (const CaesarCipher & cc){
	return this->shift > cc.shift;
}
CaesarCipher& CaesarCipher :: operator ++ (){
	shift++;
	shift %= (OFFSET_MAX - OFFSET_MIN);
	return *this;
}
CaesarCipher CaesarCipher :: operator ++ (int integer){
	CaesarCipher cc1 = CaesarCipher(*this);
	operator ++ ();
	return cc1;
}
string CaesarCipher :: encryptDecrypt (string s, bool encrypt){
	string tempString = "";
	string msg = "String to be encrypted has unrecognized character ";
	for (int i = 0; i < s.size(); i++){
		char c = s[i];
		if(!isPositionInRange(c)){
			msg += c;
			throw invalid_argument(msg);
		}
		if(encrypt){
			c += shift;
			if (c > OFFSET_MAX || c < 0){
				c = OFFSET_MIN + (c - OFFSET_MAX);
			}
		}else{
			c -= shift;
			if (c < OFFSET_MIN){
				c = OFFSET_MAX - (OFFSET_MIN - c);
			}
		}
		tempString += c;

	}

	return tempString;
}
bool CaesarCipher :: isPositionInRange(int indx) {
		return indx >= OFFSET_MIN && indx <= OFFSET_MAX;
	}

