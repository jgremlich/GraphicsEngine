////////////////////////////////////////////////////////////////////////////////
// Filename: lightclass.h
////////////////////////////////////////////////////////////////////////////////
#ifndef _LIGHTCLASS_H_
#define _LIGHTCLASS_H_


//////////////
// INCLUDES //
//////////////
#include <directxmath.h>


////////////////////////////////////////////////////////////////////////////////
// Class name: LightClass
////////////////////////////////////////////////////////////////////////////////
class LightClass
{
public:
	LightClass();
	LightClass(const LightClass&);
	~LightClass();

	void SetAmbientColor(float, float, float, float);
	void SetDiffuseColor(float, float, float, float);
	void SetDirection(float, float, float);
	void SetSpecularColor(float, float, float, float);
	void SetSpecularPower(float);

	DirectX::XMVECTOR GetAmbientColor();
	DirectX::XMVECTOR GetDiffuseColor();
	DirectX::XMVECTOR GetDirection();
	DirectX::XMVECTOR GetSpecularColor();
	float GetSpecularPower();

private:
	DirectX::XMVECTOR m_ambientColor;
	DirectX::XMVECTOR m_diffuseColor;
	DirectX::XMVECTOR m_direction;
	DirectX::XMVECTOR m_specularColor;
	float m_specularPower;
};

#endif