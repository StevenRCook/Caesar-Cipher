
// This program demonstrates the CaesarCipher class' 
// Big 4 operations and overloaded operators 
#include "CaesarCipher.h"
#include "CaesarCipherList.h"
#include <string>
#include <iostream>
using namespace std;

int main() {
	srand(time(NULL));

	cout << endl << endl << "***** RUN 1: *****" << endl << endl;

	cout << "test constructor : cc" <<endl;
    CaesarCipher cc = CaesarCipher();
    string encryptedWord = cc.encrypt("Hello, world!");
    cout << "Encrypted: " << encryptedWord << endl;
    string decryptedWord = cc.decrypt(encryptedWord);
    cout << "Decrypted: " << decryptedWord << endl;

    cout << endl << "test constructor : cc2" <<endl;
    CaesarCipher cc2 = CaesarCipher();
    string encryptedWord1 = cc2.encrypt("Hello, world!");
    cout << "Encrypted: " << encryptedWord1 << endl;
    string decryptedWord1 = cc2.decrypt(encryptedWord1);
    cout << "Decrypted: " << decryptedWord1 << endl;

    cout << endl << "*** testing copy constructor and overloaded assignment ***" << endl << endl;
    cout << "test copy constructor : cc3(cc2)" <<endl;
    CaesarCipher cc3 = CaesarCipher(cc2);
    string encryptedWord2 = cc3.encrypt("Hello, world!");
    cout << "Encrypted: " << encryptedWord2 << endl;
    string decryptedWord2 = cc3.decrypt(encryptedWord2);
    cout << "Decrypted: " << decryptedWord2 << endl;

    cout << endl << "test overloaded assignment operator : cc2 = cc" <<endl;
    cc2 = cc;
    encryptedWord1 = cc2.encrypt("Hello, world!");
    cout << "Encrypted: " << encryptedWord1 << endl;
    decryptedWord1 = cc2.decrypt(encryptedWord1);
    cout << "Decrypted: " << decryptedWord1 << endl;

    cout << endl << "*** printing cc, cc2, and cc3 ***" << endl;

    cout << endl << "printing : cc" <<endl;
    encryptedWord = cc.encrypt("Hello, world!");
    cout << "Encrypted: " << encryptedWord << endl;
    decryptedWord = cc.decrypt(encryptedWord);
    cout << "Decrypted: " << decryptedWord << endl;

    cout << endl << "printing: cc2" <<endl;
    encryptedWord1 = cc2.encrypt("Hello, world!");
    cout << "Encrypted: " << encryptedWord1 << endl;
    decryptedWord1 = cc2.decrypt(encryptedWord1);
    cout << "Decrypted: " << decryptedWord1 << endl;

    cout << endl << "printing: cc3" <<endl;
    encryptedWord2 = cc3.encrypt("Hello, world!");
    cout << "Encrypted: " << encryptedWord2 << endl;
    decryptedWord2 = cc3.decrypt(encryptedWord2);
    cout << "Decrypted: " << decryptedWord2 << endl;

    cout << endl << "*** testing comparators ***" << endl << endl;
    cout << "test comparators" << endl;
    if (cc == cc3){
    	cout << "cc == c3 is true " << endl;
    }else{
    	cout << "cc == cc3 is false" << endl;
    }
    if (cc < cc3){
    	cout << "cc < cc3 is true" << endl;
    }else{
    	cout << "cc < cc3 is false" << endl;
    }
    if (cc > cc3){
    	cout << "cc > cc3 is true" << endl;
    }else{
    	cout << "cc > cc3 is false" << endl;
    }

	cout << endl << "*** testing add ***" << endl << endl;
	cout << "test add : ";
	cc2 = (cc + cc3);
	encryptedWord1 = cc2.encrypt("Hello, world!");
	cout << "Encrypted: " << encryptedWord1 << endl;
	decryptedWord1 = cc2.decrypt(encryptedWord1);
	cout << "Decrypted: " << decryptedWord1 << endl;

	cout << endl << "*** testing increment ***" << endl;
	CaesarCipher cc4 = cc++;
	cout << endl << "test increment (postfix) :" << endl;
	encryptedWord = cc.encrypt("Hello, world!");
	cout << "Encrypted: " << encryptedWord << endl;
	decryptedWord = cc.decrypt(encryptedWord);
	cout << "Decrypted: " << decryptedWord << endl;

	cout << endl << "result of cc4 after postfix : " << endl;
	string encryptedWord3 = cc4.encrypt("Hello, world!");
	cout << "Encrypted: " << encryptedWord3 << endl;
	string decryptedWord3 = cc4.decrypt(encryptedWord3);
	cout << "Decrypted: " << decryptedWord3 << endl;

	cout << endl << "test increment (prefix) :  " << endl;
	cc4 = ++cc;
	encryptedWord = cc.encrypt("Hello, world!");
	cout << "Encrypted: " << encryptedWord << endl;
	decryptedWord = cc.decrypt(encryptedWord);
	cout << "Decrypted: " << decryptedWord << endl;

	cout << endl << "result of cc4 after prefix :  " << endl;
	encryptedWord3 = cc4.encrypt("Hello, world!");
	cout << "Encrypted: " << encryptedWord3 << endl;
	decryptedWord3 = cc4.decrypt(encryptedWord3);
	cout << "Decrypted: " << decryptedWord3 << endl;

	cout << endl << "test increment (postfix) : " << endl;
	cc4 = cc2++;
	encryptedWord1 = cc2.encrypt("Hello, world!");
	cout << "Encrypted: " << encryptedWord1 << endl;
	decryptedWord1 = cc2.decrypt(encryptedWord1);
	cout << "Decrypted: " << decryptedWord1 << endl;

	cout << endl << "result of cc4 after postfix  :" << endl;
	encryptedWord3 = cc4.encrypt("Hello, world!");
	cout << "Encrypted: " << encryptedWord3 << endl;
	decryptedWord3 = cc4.decrypt(encryptedWord3);
	cout << "Decrypted: " << decryptedWord3 << endl;

	cout << endl << "test increment (prefix) : " << endl;
	cc4 = ++cc2;
	encryptedWord1 = cc2.encrypt("Hello, world!");
	cout << "Encrypted: " << encryptedWord1 << endl;
	decryptedWord1 = cc2.decrypt(encryptedWord1);
	cout << "Decrypted: " << decryptedWord1 << endl;

	cout << endl << "result of cc4 after prefix : " << endl;
	encryptedWord3 = cc4.encrypt("Hello, world!");
	cout << "Encrypted: " << encryptedWord3 << endl;
	decryptedWord3 = cc4.decrypt(encryptedWord3);
	cout << "Decrypted: " << decryptedWord3 << endl;

	cout << endl << "test increment (postfix) : " <<endl;
	cc4 = cc3++;
	encryptedWord2 = cc3.encrypt("Hello, world!");
	cout << "Encrypted: " << encryptedWord2 << endl;
	decryptedWord2 = cc3.decrypt(encryptedWord2);
	cout << "Decrypted: " << decryptedWord2 << endl;

	cout << endl << "result of cc4 after postfix : " << endl;
	encryptedWord3 = cc4.encrypt("Hello, world!");
	cout << "Encrypted: " << encryptedWord3 << endl;
	decryptedWord3 = cc4.decrypt(encryptedWord3);
	cout << "Decrypted: " << decryptedWord3 << endl;

	cout << endl << "test increment (prefix) : " << endl;
	cc4 = ++cc3;
	encryptedWord2 = cc3.encrypt("Hello, world!");
	cout << "Encrypted: " << encryptedWord2 << endl;
	decryptedWord2 = cc3.decrypt(encryptedWord2);
	cout << "Decrypted: " << decryptedWord2 << endl;

	cout << endl << "result of cc4 after prefix :" << endl;
	encryptedWord3 = cc4.encrypt("Hello, world!");
	cout << "Encrypted: " << encryptedWord3 << endl;
	decryptedWord3 = cc4.decrypt(encryptedWord3);
	cout << "Decrypted: " << decryptedWord3 << endl;

	//List Test
	cout << endl << "*** testing list ***" <<endl;
	cout << endl << "test list : add cc, cc2, cc3";
	CaesarCipherList cList = CaesarCipherList(8);
	cList.addElement(cc);
	cList.addElement(cc2);
	cList.addElement(cc3);

	cout << endl << "test get list[0] : " << endl;
	CaesarCipher cZero = cList.getElement(0);
	encryptedWord = cZero.encrypt("Hello, world!");
	cout << "Encrypted: " << encryptedWord << endl;
	decryptedWord = cZero.decrypt(encryptedWord);
	cout << "Decrypted: " << decryptedWord << endl;

	cout << endl << "test get list[1] : " << endl;
	CaesarCipher cOne =cList.getElement(1);
	encryptedWord = cOne.encrypt("Hello, world!");
	cout << "Encrypted: " << encryptedWord << endl;
	decryptedWord = cOne.decrypt(encryptedWord);
	cout << "Decrypted: " << decryptedWord << endl;

	cout << endl << "test get list[2] : " << endl;
	CaesarCipher cTwo =cList.getElement(2);
	encryptedWord = cTwo.encrypt("Hello, world!");
	cout << "Encrypted: " << encryptedWord << endl;
	decryptedWord = cTwo.decrypt(encryptedWord);
	cout << "Decrypted: " << decryptedWord << endl;

	cout << endl << endl << "***** RUN 2: *****" << endl << endl;

	cout << "test constructor : cc" <<endl;
	cc = CaesarCipher();
	encryptedWord = cc.encrypt("Hello, world!");
	cout << "Encrypted: " << encryptedWord << endl;
	decryptedWord = cc.decrypt(encryptedWord);
	cout << "Decrypted: " << decryptedWord << endl;

	cout << endl << "test constructor : cc2" <<endl;
	cc2 = CaesarCipher();
	encryptedWord1 = cc2.encrypt("Hello, world!");
	cout << "Encrypted: " << encryptedWord1 << endl;
	decryptedWord1 = cc2.decrypt(encryptedWord1);
	cout << "Decrypted: " << decryptedWord1 << endl;

	cout << endl << "*** testing copy constructor and overloaded assignment ***" << endl << endl;
	cout << "test copy constructor : cc3(cc2)" <<endl;
	cc3 = CaesarCipher(cc2);
	encryptedWord2 = cc3.encrypt("Hello, world!");
	cout << "Encrypted: " << encryptedWord2 << endl;
	decryptedWord2 = cc3.decrypt(encryptedWord2);
	cout << "Decrypted: " << decryptedWord2 << endl;

	cout<< endl << "test overloaded assignment operator : cc2 = cc" <<endl;
	cc2 = cc;
	encryptedWord1 = cc2.encrypt("Hello, world!");
	cout << "Encrypted: " << encryptedWord1 << endl;
	decryptedWord1 = cc2.decrypt(encryptedWord1);
	cout << "Decrypted: " << decryptedWord1 << endl;

	cout << endl << "*** printing cc, cc2, and cc3 ***" << endl << endl;

	cout << "printing : cc" <<endl;
	encryptedWord = cc.encrypt("Hello, world!");
	cout << "Encrypted: " << encryptedWord << endl;
	decryptedWord = cc.decrypt(encryptedWord);
	cout << "Decrypted: " << decryptedWord << endl;

	cout << endl << "printing: cc2" <<endl;
	encryptedWord1 = cc2.encrypt("Hello, world!");
	cout << "Encrypted: " << encryptedWord1 << endl;
	decryptedWord1 = cc2.decrypt(encryptedWord1);
	cout << "Decrypted: " << decryptedWord1 << endl;

	cout << endl <<"printing: cc3" <<endl;
	encryptedWord2 = cc3.encrypt("Hello, world!");
	cout << "Encrypted: " << encryptedWord2 << endl;
	decryptedWord2 = cc3.decrypt(encryptedWord2);
	cout << "Decrypted: " << decryptedWord2 << endl;

	cout << endl << "*** testing comparators ***" << endl;
	cout << endl << "test comparators" << endl;
	 if (cc == cc3){
	    cout << "cc == c3 is true " << endl;
	 }else{
	    cout << "cc == cc3 is false" << endl;
	 }
	 if (cc < cc3){
	    cout << "cc < cc3 is true" << endl;
	 }else{
	    cout << "cc < cc3 is false" << endl;
	 }
	 if (cc > cc3){
	    cout << "cc > cc3 is true" << endl;
	 }else{
	    cout << "cc > cc3 is false" << endl;
	    }

	cout << endl << "*** testing add ***" << endl;
	cout << endl << "test add : ";
	cc2 = (cc + cc3);
	encryptedWord1 = cc2.encrypt("Hello, world!");
	cout << "Encrypted: " << encryptedWord1 << endl;
	decryptedWord1 = cc2.decrypt(encryptedWord1);
	cout << "Decrypted: " << decryptedWord1 << endl;

	cout << endl << "*** testing increment ***" << endl;
	cc4 = cc++;
	cout << endl << "test increment (postfix) :" << endl;
	encryptedWord = cc.encrypt("Hello, world!");
	cout << "Encrypted: " << encryptedWord << endl;
	decryptedWord = cc.decrypt(encryptedWord);
	cout << "Decrypted: " << decryptedWord << endl;

	cout << endl << "result of cc4 after postfix : " << endl;
	encryptedWord3 = cc4.encrypt("Hello, world!");
	cout << "Encrypted: " << encryptedWord3 << endl;
	decryptedWord3 = cc4.decrypt(encryptedWord3);
	cout << "Decrypted: " << decryptedWord3 << endl;

	cout << endl << "test increment (prefix) :  " << endl;
	cc4 = ++cc;
	encryptedWord = cc.encrypt("Hello, world!");
	cout << "Encrypted: " << encryptedWord << endl;
	decryptedWord = cc.decrypt(encryptedWord);
	cout << "Decrypted: " << decryptedWord << endl;

	cout << endl << "result of cc4 after prefix :  " << endl;
	encryptedWord3 = cc4.encrypt("Hello, world!");
	cout << "Encrypted: " << encryptedWord3 << endl;
	decryptedWord3 = cc4.decrypt(encryptedWord3);
	cout << "Decrypted: " << decryptedWord3 << endl;

	cout << endl << "test increment (postfix) : " << endl;
	cc4 = cc2++;
	encryptedWord1 = cc2.encrypt("Hello, world!");
	cout << "Encrypted: " << encryptedWord1 << endl;
	decryptedWord1 = cc2.decrypt(encryptedWord1);
	cout << "Decrypted: " << decryptedWord1 << endl;

	cout << endl << "result of cc4 after postfix  :" << endl;
	encryptedWord3 = cc4.encrypt("Hello, world!");
	cout << "Encrypted: " << encryptedWord3 << endl;
	decryptedWord3 = cc4.decrypt(encryptedWord3);
	cout << "Decrypted: " << decryptedWord3 << endl;

	cout <<  endl << "test increment (prefix) : " << endl;
	cc4 = ++cc2;
	encryptedWord1 = cc2.encrypt("Hello, world!");
	cout << "Encrypted: " << encryptedWord1 << endl;
	decryptedWord1 = cc2.decrypt(encryptedWord1);
	cout << "Decrypted: " << decryptedWord1 << endl;

	cout << endl << "result of cc4 after prefix : " << endl;
	encryptedWord3 = cc4.encrypt("Hello, world!");
	cout << "Encrypted: " << encryptedWord3 << endl;
	decryptedWord3 = cc4.decrypt(encryptedWord3);
	cout << "Decrypted: " << decryptedWord3 << endl;

	cout << endl << "test increment (postfix) : " <<endl;
	cc4 = cc3++;
	encryptedWord2 = cc3.encrypt("Hello, world!");
	cout << "Encrypted: " << encryptedWord2 << endl;
	decryptedWord2 = cc3.decrypt(encryptedWord2);
	cout << "Decrypted: " << decryptedWord2 << endl;

	cout << endl << "result of cc4 after postfix : " << endl;
	encryptedWord3 = cc4.encrypt("Hello, world!");
	cout << "Encrypted: " << encryptedWord3 << endl;
	decryptedWord3 = cc4.decrypt(encryptedWord3);
	cout << "Decrypted: " << decryptedWord3 << endl;

	cout << endl << "test increment (prefix) : " << endl;
	cc4 = ++cc3;
	encryptedWord2 = cc3.encrypt("Hello, world!");
	cout << "Encrypted: " << encryptedWord2 << endl;
	decryptedWord2 = cc3.decrypt(encryptedWord2);
	cout << "Decrypted: " << decryptedWord2 << endl;

	cout << endl << "result of cc4 after prefix :" << endl;
	encryptedWord3 = cc4.encrypt("Hello, world!");
	cout << "Encrypted: " << encryptedWord3 << endl;
	decryptedWord3 = cc4.decrypt(encryptedWord3);
	cout << "Decrypted: " << decryptedWord3 << endl;

	//List Test
	cout << endl << "*** testing list ***" <<endl;
	cout << endl << "test list : add cc, cc2, cc3";
	cList = CaesarCipherList(8);
	cList.addElement(cc);
	cList.addElement(cc2);
	cList.addElement(cc3);

	cout << endl << "test get list[0] : " << endl;
	cZero = cList.getElement(0);
	encryptedWord = cZero.encrypt("Hello, world!");
	cout << "Encrypted: " << encryptedWord << endl;
	decryptedWord = cZero.decrypt(encryptedWord);
	cout << "Decrypted: " << decryptedWord << endl;

	cout << endl << "test get list[1] : " << endl;
	cOne =cList.getElement(1);
	encryptedWord = cOne.encrypt("Hello, world!");
	cout << "Encrypted: " << encryptedWord << endl;
	decryptedWord = cOne.decrypt(encryptedWord);
	cout << "Decrypted: " << decryptedWord << endl;

	cout << endl << "test get list[2] : " << endl;
	cTwo =cList.getElement(2);
	encryptedWord = cTwo.encrypt("Hello, world!");
	cout << "Encrypted: " << encryptedWord << endl;
	decryptedWord = cTwo.decrypt(encryptedWord);
	cout << "Decrypted: " << decryptedWord << endl;


    return 0;
}
