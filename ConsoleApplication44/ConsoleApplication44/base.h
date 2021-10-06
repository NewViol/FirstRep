#pragma once

#include <iostream>

using namespace std;


template <typename T1, typename T2>
class base
{
public:
	base(){

	}
	base(T1 v1, T2 v2) : value1{ v1 }, value2{ v2 }{

	}
	base(const base<T1, T2>& source){
		value1 = source.value1;
		value2 = source.value2;
	}
	~base(){

	}
	T1 getValue1(){
		return value1;
	}
	T2 getValue2(){
		return value2;
	}
	void SetValue1(T1 v1){
		value1 = v1;
	}
	void SetValue2(T2 v2){
		value2 = v2;
	}
	virtual void Print(){
		cout << "base:" << value1 << " | " << value2 << endl;
	}

protected:
	T1 value1;
	T2 value2;
};

template <typename T1, typename T2, typename T3, typename T4>
class child : public base<T1, T2>
{
public:
	virtual void Print() override{
		cout << "child:" << base<T1, T2>::value1 << " | " << base<T1, T2>::value2 << " | " << value3 << " | " << value4 << endl;
	}
	child() :base<T1, T2>(){

	}
	child(T1 v1, T2 v2, T3 v3, T4 v4) : base<T1, T2>(v1, v2){
		value3 = v3;
		value4 = v4;
	}
	child(const child<T1, T2, T3, T4 >& source){
		base<T1, T2>::value1 = source.value1;
		base<T1, T2>::value2 = source.value2;
		value3 = source.value3;
		value4 = source.value4;
	}
	~child(){

	}
	T3 getValue3(){
		return value3;
	}
	T4 getValue4(){
		return value4;
	}
	void SetValue3(T3 v3){
		value3 = v3;
	}
	void SetValue4(T4 v4){
		value4 = v4;
	}
protected:
	T3 value3;
	T4 value4;
};

template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
class child2 : public child<T1, T2, T3, T4>
{
public:
	virtual void Print() override{
		cout << "child2:" << base<T1, T2>::value1 << " | " << base<T1, T2>::value2
			<< " | " << child<T1, T2, T3, T4>::value3 << " | " << child<T1, T2, T3, T4>::value4
			<< " | " << value5 << " | " << value6 << endl;
	}
	child2() :child <T1, T2, T3, T4>()	{

	}
	child2(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5, T6 v6) : child<T1, T2, T3, T4>(v1, v2, v3, v4){
		value5 = v5;
		value6 = v6;
	}
	child2(const child2<T1, T2, T3, T4, T5, T6>& source){
		base<T1, T2>::value1 = source.value1;
		base<T1, T2>::value2 = source.value2;

		child<T1, T2, T3, T4>::value3 = source.value3;
		child<T1, T2, T3, T4>::value4 = source.value4;

		value5 = source.value5;
		value6 = source.value6;
	}
	~child2(){

	}
	T5 getValue5(){
		return value5;
	}
	T6 getValue6(){
		return value6;
	}
	void SetValue5(T5 v5){
		value5 = v5;
	}
	void SetValue6(T6 v6){
		value6 = v6;
	}
protected:
	T5 value5;
	T6 value6;
};


