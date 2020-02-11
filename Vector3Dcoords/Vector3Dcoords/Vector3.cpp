#include "CVector3.h"

#include <math.h>

const float CVector3::operator[](const int a_i) const {
	return m_coordinates[a_i];
}

const CVector3 CVector3::operator+(const CVector3& a_other) const {
	CVector3 newvector3;

	newvector3.m_coordinates[0] = m_coordinates[0] + a_other.m_coordinates[0];
	newvector3.m_coordinates[1] = m_coordinates[1] + a_other.m_coordinates[1];
	newvector3.m_coordinates[2] = m_coordinates[2] + a_other.m_coordinates[2];

	return newvector3;
}

void CVector3::operator+=(const CVector3& a_other) {
	m_coordinates[0] += a_other.m_coordinates[0];
	m_coordinates[1] += a_other.m_coordinates[1];
	m_coordinates[2] += a_other.m_coordinates[2];
}

const CVector3 CVector3::operator-(const CVector3& a_other) const {
	CVector3 subtractvector3;

	subtractvector3.m_coordinates[0] = m_coordinates[0] - a_other.m_coordinates[0];
	subtractvector3.m_coordinates[1] = m_coordinates[1] - a_other.m_coordinates[1];
	subtractvector3.m_coordinates[2] = m_coordinates[2] - a_other.m_coordinates[2];
}

void CVector3::operator-=(const CVector3& a_other) {
	m_coordinates[0] -= a_other.m_coordinates[0];
	m_coordinates[1] -= a_other.m_coordinates[1];
	m_coordinates[2] -= a_other.m_coordinates[2];
}

const CVector3 CVector3::operator*(const float a_other) const {
	CVector3 multvector3;

	multvector3.m_coordinates[0] = m_coordinates[0] * a_other;
	multvector3.m_coordinates[1] = m_coordinates[1] * a_other;
	multvector3.m_coordinates[2] = m_coordinates[2] * a_other;
}

const CVector3 CVector3::operator*(const CVector3& a_other) const {
	CVector3 multvector3;

	multvector3.m_coordinates[0] = m_coordinates[0] * a_other.m_coordinates[0];
	multvector3.m_coordinates[1] = m_coordinates[1] * a_other.m_coordinates[1];
	multvector3.m_coordinates[2] = m_coordinates[2] * a_other.m_coordinates[2];
}

void CVector3::operator*=(const CVector3& a_other) {
	m_coordinates[0] *= a_other.m_coordinates[0];
	m_coordinates[1] *= a_other.m_coordinates[1];
	m_coordinates[2] *= a_other.m_coordinates[2];
}
void CVector3::operator*=(const float a_other) {
	m_coordinates[0] *= a_other;
	m_coordinates[1] *= a_other;
	m_coordinates[2] *= a_other;
}

const CVector3 CVector3::operator*(const CMatrix3& a_other) const {
	return CVector3();
}

const CVector3 CVector3::operator/(const float a_other) const {
	CVector3 divvector;

	divvector.m_coordinates[0] = m_coordinates[0] / a_other;
	divvector.m_coordinates[1] = m_coordinates[1] / a_other;
	divvector.m_coordinates[2] = m_coordinates[2] / a_other;
}

const CVector3 CVector3::operator/(const CVector3& a_other) const {
	CVector3 divvector2;

	divvector2.m_coordinates[0] = m_coordinates[0] / a_other.m_coordinates[0];
	divvector2.m_coordinates[1] = m_coordinates[1] / a_other.m_coordinates[1];
	divvector2.m_coordinates[2] = m_coordinates[2] / a_other.m_coordinates[2];
}

void CVector3::operator/=(const CVector3& a_other) {
	m_coordinates[0] /= a_other.m_coordinates[0];
	m_coordinates[1] /= a_other.m_coordinates[1];
	m_coordinates[2] /= a_other.m_coordinates[2];
}

void CVector3::operator/=(const float a_other) {
	m_coordinates[0] /= a_other;
	m_coordinates[1] /= a_other;
	m_coordinates[2] /= a_other;
}

const float CVector3::magnitude() const {
	sqrtf(magnitudeSq());
}

const float CVector3::magnitudeSq() const {
	return (CVector3::m_coordinates[0] * CVector3::m_coordinates[0]) + (CVector3::m_coordinates[1] * CVector3::m_coordinates[1]) + (CVector3::m_coordinates[2]);
}

const float CVector3::distance(const CVector3& a_other)const{
	return CVector3::m_coordinates[0] - CVector3::m_coordinates[1];
}

const float CVector3::distanceSq(const CVector3& a_other) const {
	return (CVector3::m_coordinates[0] * CVector3::m_coordinates[0]) - (CVector3::m_coordinates[1] * CVector3::m_coordinates[1]);
}