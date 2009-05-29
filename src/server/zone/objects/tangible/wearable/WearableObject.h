/*
 *	server/zone/objects/tangible/wearable/WearableObject.h generated by engine3 IDL compiler 0.55
 */

#ifndef WEARABLEOBJECT_H_
#define WEARABLEOBJECT_H_

#include "engine/orb/DistributedObjectBroker.h"

class TangibleObject;

#include "../TangibleObject.h"

class WearableObject : public TangibleObject {
public:
	WearableObject();

protected:
	WearableObject(DummyConstructorParameter* param);

	virtual ~WearableObject();

	friend class WearableObjectHelper;
};

class WearableObjectImplementation;

class WearableObjectAdapter : public TangibleObjectAdapter {
public:
	WearableObjectAdapter(WearableObjectImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

};

class WearableObjectHelper : public DistributedObjectClassHelper, public Singleton<WearableObjectHelper> {
	static WearableObjectHelper* staticInitializer;

public:
	WearableObjectHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class SingletonWrapper<WearableObjectHelper>;
};

#include "../TangibleObjectImplementation.h"

class WearableObjectServant : public TangibleObjectImplementation {
public:
	WearableObject* _this;

public:
	WearableObjectServant();
	virtual ~WearableObjectServant();

	void _setStub(DistributedObjectStub* stub);
	DistributedObjectStub* _getStub();

};

#endif /*WEARABLEOBJECT_H_*/
