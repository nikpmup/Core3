/*
 *	server/zone/objects/tangible/terminal/bazaar/BazaarTerminalObject.cpp generated by engine3 IDL compiler 0.55
 */

#include "BazaarTerminalObject.h"

#include "BazaarTerminalObjectImplementation.h"

#include "../TerminalObject.h"

/*
 *	BazaarTerminalObjectStub
 */

BazaarTerminalObject::BazaarTerminalObject() : TerminalObject(DummyConstructorParameter::instance()) {
	_impl = new BazaarTerminalObjectImplementation();
	_impl->_setStub(this);
}

BazaarTerminalObject::BazaarTerminalObject(DummyConstructorParameter* param) : TerminalObject(param) {
}

BazaarTerminalObject::~BazaarTerminalObject() {
}

/*
 *	BazaarTerminalObjectAdapter
 */

BazaarTerminalObjectAdapter::BazaarTerminalObjectAdapter(BazaarTerminalObjectImplementation* obj) : TerminalObjectAdapter(obj) {
}

Packet* BazaarTerminalObjectAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	default:
		return NULL;
	}

	return resp;
}

/*
 *	BazaarTerminalObjectHelper
 */

BazaarTerminalObjectHelper* BazaarTerminalObjectHelper::staticInitializer = BazaarTerminalObjectHelper::instance();

BazaarTerminalObjectHelper::BazaarTerminalObjectHelper() {
	className = "BazaarTerminalObject";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void BazaarTerminalObjectHelper::finalizeHelper() {
	BazaarTerminalObjectHelper::finalize();
}

DistributedObject* BazaarTerminalObjectHelper::instantiateObject() {
	return new BazaarTerminalObject(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* BazaarTerminalObjectHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new BazaarTerminalObjectAdapter((BazaarTerminalObjectImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

/*
 *	BazaarTerminalObjectServant
 */

BazaarTerminalObjectServant::BazaarTerminalObjectServant() : TerminalObjectImplementation() {
	_classHelper = BazaarTerminalObjectHelper::instance();
}

BazaarTerminalObjectServant::~BazaarTerminalObjectServant() {
}

void BazaarTerminalObjectServant::_setStub(DistributedObjectStub* stub) {
	_this = (BazaarTerminalObject*) stub;
	TerminalObjectServant::_setStub(stub);
}

DistributedObjectStub* BazaarTerminalObjectServant::_getStub() {
	return _this;
}

