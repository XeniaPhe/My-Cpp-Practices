
#ifndef MATHCONSTANTS_H
#    define MATHCONSTANTS_H

/*
 * Inline constexpr variables are more advantageous to extern const variables becuase 
 * they will be instantiated once no matter how many files they're included in and they have the advantage of
 * better optimization
 */

namespace constants		
{
	inline constexpr float PI = 3.14159265359f;
	inline constexpr float e = 2.71828182846;
	inline constexpr float NEGATIVE_INFINITY = 0xFF800000;
	inline constexpr float POSITIVE_INFINITY = 0x7F800000;
}

#endif /* MATHCONSTANTS_H */

