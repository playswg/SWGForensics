/*
 * Vector4.h
 *
 *  Created on: 11/12/2010
 *      Author: victor
 */

#ifndef VECTOR4_H_
#define VECTOR4_H_

#include "../iff/exceptions/ArrayIndexOutOfBoundsException.h"
#include <cmath>


class Vector4 {
protected:
	float x, y, z, w;

public:
	Vector4() {
		x = 0, y = 0, z = 0, w = 0;
	}

	Vector4(float px, float py, float pz, float pw) {
		x = px;
		y = py;
		z = pz;
		w = pw;
	}

	Vector4(const Vector4& v) {
		x = v.x;
		y = v.y;
		z = v.z;
		w = v.w;
	}

	inline void setZero() {
		x = 0, y = 0, z = 0, w = 0;
	}

	inline float& operator[](unsigned int index) {
		if (index > 3)
			throw ArrayIndexOutOfBoundsException(index);

		return *(&x + index);
	}

	inline float operator[](unsigned int index) const {
		if (index > 3)
			throw ArrayIndexOutOfBoundsException(index);

		return *(&x + index);
	}

};



#endif /* VECTOR4_H_ */
