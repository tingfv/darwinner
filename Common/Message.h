///////////////////////////////////////////////////////////
//  Message.h
//  Implementation of the Class Message
//  Created on:      02-Apr-2009 18:03:38
//  Original author: Tim Kuo
///////////////////////////////////////////////////////////

#if !defined(EA_DFF946BC_B0FA_4688_A3B1_8556052D1F43__INCLUDED_)
#define EA_DFF946BC_B0FA_4688_A3B1_8556052D1F43__INCLUDED_

#include "common.h"
#include <string>
using namespace std;

class Message
{

public:
	Message();
	Message(void* data);
	//Message(uint32 type, void* data = NULL);
	Message(uint32 type, void* data = NULL, void* data2 = NULL);
	/*
	Message(const Message&);  
	Message &operator = (const Message&);   
	*/
	~Message();
	void* data();
	void* data2();
	uint32 length();
	void setData(void* data, uint32 size);
	void setData(void* data);
	void setData2(void* data);
	void setLength(uint32 length);
	void setType(uint32 type);
	uint32 type();
	uint32 group();
	uint32 subgroup();
	bool isAction();
	bool isEvent();
private:
	void* m_data;
	void* m_data2;
	uint32 m_length;
	uint32 m_type;
	uint32 m_id;

};
#endif // !defined(EA_DFF946BC_B0FA_4688_A3B1_8556052D1F43__INCLUDED_)
