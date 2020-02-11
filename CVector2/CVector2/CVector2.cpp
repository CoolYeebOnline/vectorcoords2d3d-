#include "CVector2.h"

#include <math.h>

const float CVector2::operator[](const int a_i) const {
	return m_coordinates[a_i];
}

const CVector2 CVector2::operator+(const CVector2 &a_other) const {
	CVector2 newvector2;

	newvector2.m_coordinates[0] = m_coordinates[0] + a_other.m_coordinates[0];
	newvector2.m_coordinates[1] = m_coordinates[1] + a_other.m_coordinates[1];

	return newvector2;
}

void CVector2::operator+=(const CVector2 &a_other) {
	m_coordinates[0] += a_other.m_coordinates[0];
	m_coordinates[1] += a_other.m_coordinates[1];
}

const CVector2 CVector2::operator-(const CVector2 &a_other) const {
	CVector2 subtractvector;

	subtractvector.m_coordinates[0] = m_coordinates[0] - a_other.m_coordinates[0];
	subtractvector.m_coordinates[1] = m_coordinates[0] - a_other.m_coordinates[0];
}

void CVector2::operator-=(const CVector2 &a_other) {
	m_coordinates[0] -= a_other.m_coordinates[0];
	m_coordinates[1] -= a_other.m_coordinates[1];
}

const CVector2 CVector2::operator*(const float a_other) const {
	CVector2 multvector;

	multvector.m_coordinates[0] = m_coordinates[0] * a_other;
	multvector.m_coordinates[1] = m_coordinates[1] * a_other;
}

const CVector2 CVector2::operator*(const CVector2 &a_other) const {
	CVector2 multvector2;

	multvector2.m_coordinates[0] = m_coordinates[0] * a_other.m_coordinates[0];
	multvector2.m_coordinates[1] = m_coordinates[1] * a_other.m_coordinates[1];
}

void CVector2::operator*=(const CVector2 &a_other){
	m_coordinates[0] *= a_other.m_coordinates[0];
	m_coordinates[1] *= a_other.m_coordinates[1];
}
void CVector2::operator*=(const float a_other) {
	m_coordinates[0] *= a_other;
	m_coordinates[1] *= a_other;
}

const CVector2 CVector2::operator/(const float a_other) const{
	CVector2 divvector;

	divvector.m_coordinates[0] = m_coordinates[0] / a_other;
	divvector.m_coordinates[1] = m_coordinates[1] / a_other;
}

const CVector2 CVector2::operator/(const CVector2 &a_other) const {
	CVector2 divvector2;

	divvector2.m_coordinates[0] = m_coordinates[0] / a_other.m_coordinates[0];
	divvector2.m_coordinates[1] = m_coordinates[1] / a_other.m_coordinates[1];
}

void CVector2::operator/=(const CVector2 &a_other) {
	m_coordinates[0] /= a_other.m_coordinates[0];
	m_coordinates[1] /= a_other.m_coordinates[1];
}

void CVector2::operator/=(const float a_other) {
	m_coordinates[0] /= a_other;
	m_coordinates[1] /= a_other;
}

const float CVector2::magnitude() const {
	return sqrtf(magnitudeSq());
}


const float CVector2::magnitudeSq() const {
	return (CVector2::m_coordinates[0] * CVector2::m_coordinates[0]) + (CVector2::m_coordinates[1] * CVector2::m_coordinates[1]);
}


const float CVector2::distance(const CVector2& a_other) const {
	return sqrtf(distanceSq());
}

const float CVector2::distanceSq(const CVector2& a_other)const {
	return (CVector2::m_coordinates[0] * CVector2::m_coordinates[0]) - (CVector2::m_coordinates[1] * CVector2::m_coordinates[1]);
}

const float CVector2::dotProduct(const CVector2& a_other) const
{
	return (m_coordinates[0] * a_other[0]) + (m_coordinates[1] * a_other[1]);
	
}
