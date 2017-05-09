////////////////////////////////////////////////////////////////////////////////
// Filename: lightclass.cpp
////////////////////////////////////////////////////////////////////////////////
#include "lightclass.h"


LightClass::LightClass()
{
}


LightClass::LightClass(const LightClass& other)
{
}


LightClass::~LightClass()
{
}


void LightClass::SetAmbientColor(float red, float green, float blue, float alpha)
{
	m_ambientColor = DirectX::XMLoadFloat4(&DirectX::XMFLOAT4(red, green, blue, alpha));
	return;
}


void LightClass::SetDiffuseColor(float red, float green, float blue, float alpha)
{
	m_diffuseColor = DirectX::XMLoadFloat4(&DirectX::XMFLOAT4(red, green, blue, alpha));
	return;
}


void LightClass::SetDirection(float x, float y, float z)
{
	m_direction = DirectX::XMLoadFloat3(&DirectX::XMFLOAT3(x, y, z));
	return;
}


void LightClass::SetSpecularColor(float red, float green, float blue, float alpha)
{
	m_specularColor = DirectX::XMLoadFloat4(&DirectX::XMFLOAT4(red, green, blue, alpha));
}


void LightClass::SetSpecularPower(float power)
{
	m_specularPower = power;
	return;
}


DirectX::XMVECTOR LightClass::GetAmbientColor()
{
	return m_ambientColor;
}


DirectX::XMVECTOR LightClass::GetDiffuseColor()
{
	return m_diffuseColor;
}


DirectX::XMVECTOR LightClass::GetDirection()
{
	return m_direction;
}


DirectX::XMVECTOR LightClass::GetSpecularColor()
{
	return m_specularColor;
}


float LightClass::GetSpecularPower()
{
	return m_specularPower;
}