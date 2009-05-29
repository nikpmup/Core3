/*
 *	server/zone/objects/tangible/terminal/bazaar/BazaarTerminalObject.h generated by engine3 IDL compiler 0.55
 */

#ifndef BAZAARTERMINALOBJECT_H_
#define BAZAARTERMINALOBJECT_H_

#include "engine/orb/DistributedObjectBroker.h"

class TerminalObject;

#include "../TerminalObject.h"

class BazaarTerminalObject : public TerminalObject {
public:
	BazaarTerminalObject();

protected:
	BazaarTerminalObject(DummyConstructorParameter* param);

	virtual ~BazaarTerminalObject();

	friend class BazaarTerminalObjectHelper;
};

class BazaarTerminalObjectImplementation;

class BazaarTerminalObjectAdapter : public TerminalObjectAdapter {
public:
	BazaarTerminalObjectAdapter(BazaarTerminalObjectImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

};

class BazaarTerminalObjectHelper : public DistributedObjectClassHelper, public Singleton<BazaarTerminalObjectHelper> {
	static BazaarTerminalObjectHelper* staticInitializer;

public:
	BazaarTerminalObjectHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class SingletonWrapper<BazaarTerminalObjectHelper>;
};

#include "../TerminalObjectImplementation.h"

class BazaarTerminalObjectServant : public TerminalObjectImplementation {
public:
	BazaarTerminalObject* _this;

public:
	BazaarTerminalObjectServant();
	virtual ~BazaarTerminalObjectServant();

	void _setStub(DistributedObjectStub* stub);
	DistributedObjectStub* _getStub();

};

#endif /*BAZAARTERMINALOBJECT_H_*/
