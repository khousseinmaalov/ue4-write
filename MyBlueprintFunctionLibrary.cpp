// Fill out your copyright notice in the Description page of Project Settings.

#include "MyBlueprintFunctionLibrary.h"
#include <iostream>
#include <sstream>
#include <string>
#include <Windows.h>
#include <fstream>
using namespace std;

void UMyBlueprintFunctionLibrary::WriteFonction(int SomeString)
{
	ofstream fichier("C:\\Users\\machintruc\\Desktop\\test.txt", ios::out | ios::trunc);

		string nom = "kh_maalov";
		fichier << nom << ' ' << SomeString;
		fichier.close();
}
