///////////////////////////////////////////////////////////
//  SMHandler.h
//  Implementation of the Class SMHandler
//  Created on:      08-Apr-2009 14:40:22 PM
//  Original author: Tim Kuo
///////////////////////////////////////////////////////////

#if !defined(EA_E00DDA3D_9ED8_47b4_8128_B5598B0D9178__INCLUDED_)
#define EA_E00DDA3D_9ED8_47b4_8128_B5598B0D9178__INCLUDED_

#include "DUIHandler.h"
#include "IEventObserver.h"
#include "Staff.h"
#include <list>
#include <map>
#include <string>
class Job;
class Level;
class Status;
using namespace std;

class SMHandler : public DUIHandler, public IEventObserver
{

public:
	SMHandler();
	virtual ~SMHandler();

	void Start();
	void StartAction(Message& act);
	void OnEvent(Message & ev);

private:
	list<Staff> m_staffCache;
	list<Level> m_staffLevel;
	list<Job> m_staffType;
	list<Status> m_staffState;
	map<uint32, string> m_taskType;
	DUIObserver* m_mainWindow;
};
#endif // !defined(EA_E00DDA3D_9ED8_47b4_8128_B3398B0D9178__INCLUDED_)
