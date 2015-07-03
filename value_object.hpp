#ifndef __MYUN2_GITHUB_COM__VALUE_OBJECT_HPP__
#define __MYUN2_GITHUB_COM__VALUE_OBJECT_HPP__

namespace myun2
{
	template <typename T>
	struct value_object
	{
		typedef T type;
		T value;
		value_object(){}
		value_object(const T& v) : value(v) {}

		const T& get_value() const { return value; }
		operator const T& () const { return value; }
	};
}

#endif//__MYUN2_GITHUB_COM__VALUE_OBJECT_HPP__
