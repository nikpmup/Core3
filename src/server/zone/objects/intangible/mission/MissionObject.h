/*
 *	server/zone/objects/intangible/mission/MissionObject.h generated by engine3 IDL compiler 0.55
 */

#ifndef MISSIONOBJECT_H_
#define MISSIONOBJECT_H_

#include "engine/orb/DistributedObjectBroker.h"

class IntangibleObject;

#include "../IntangibleObject.h"

class MissionObject : public IntangibleObject {
public:
	MissionObject();

protected:
	MissionObject(DummyConstructorParameter* param);

	virtual ~MissionObject();

	friend class MissionObjectHelper;
};

class MissionObjectImplementation;

class MissionObjectAdapter : public IntangibleObjectAdapter {
public:
	MissionObjectAdapter(MissionObjectImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

};

class MissionObjectHelper : public DistributedObjectClassHelper, public Singleton<MissionObjectHelper> {
	static MissionObjectHelper* staticInitializer;

public:
	MissionObjectHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class SingletonWrapper<MissionObjectHelper>;
};

#include "../IntangibleObjectImplementation.h"

class MissionObjectServant : public IntangibleObjectImplementation {
public:
	MissionObject* _this;

public:
	MissionObjectServant();
	virtual ~MissionObjectServant();

	void _setStub(DistributedObjectStub* stub);
	DistributedObjectStub* _getStub();

};

#endif /*MISSIONOBJECT_H_*/
