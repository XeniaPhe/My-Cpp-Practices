/* 
 * File:   MathTemplates.h
 * Author: xenia
 *
 * Created on March 26, 2022, 3:37 AM
 */

#ifndef MATHTEMPLATES_H
#    define MATHTEMPLATES_H

namespace mathTemplates
{
	template<typename T>	//template function
	T max(T t1, T t2)
	{
		return t1 > t2 ? t1 : t2;
	}
	
	template<typename T,typename U>		//To avoid ambiguous calls
	auto max(T t,U u)
	{
		return t > u ? t : u; 
	}

	template<class T>	//This is also a valid template declaration
	T min(T t1, T t2)
	{
		return t1 > t2 ? t2 : t1;
	}
	template<typename T, typename U> //To avoid ambiguous calls
	auto min(T t, U u)
	{
		return t > u ? u : t;
	}

	auto add(auto x, auto y)	//this is another template declaration
	{
		return x + y;
	}

	auto subtract(auto x, auto y)
	{
		return x - y;
	}

	auto multiply(auto x, auto y)
	{
		return x*y;
	}

	auto divide(auto x, auto y)
	{
		return x / y;
	}
}

#endif /* MATHTEMPLATES_H */

