/*
 *	server/zone/managers/structure/StructureManager.cpp generated by engine3 IDL compiler 0.55
 */

#include "StructureManager.h"

#include "StructureManagerImplementation.h"

#include "server/zone/Zone.h"

#include "server/zone/ZoneProcessServerImplementation.h"

/*
 *	StructureManagerStub
 */

StructureManager::StructureManager(Zone* zone, ZoneProcessServerImplementation* processor) {
	_impl = new StructureManagerImplementation(zone, processor);
	_impl->_setStub(this);
}

StructureManager::StructureManager(DummyConstructorParameter* param) {
	_impl = NULL;
}

StructureManager::~StructureManager() {
}

void StructureManager::error(const String& message) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);
		method.addAsciiParameter(message);

		method.executeWithVoidReturn();
	} else
		((StructureManagerImplementation*) _impl)->error(message);
}

void StructureManager::info(const String& message) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);
		method.addAsciiParameter(message);

		method.executeWithVoidReturn();
	} else
		((StructureManagerImplementation*) _impl)->info(message);
}

/*
 *	StructureManagerAdapter
 */

StructureManagerAdapter::StructureManagerAdapter(StructureManagerImplementation* obj) : DistributedObjectAdapter((DistributedObjectServant*) obj) {
}

Packet* StructureManagerAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		error(inv->getAsciiParameter(_param0_error__String_));
		break;
	case 7:
		info(inv->getAsciiParameter(_param0_info__String_));
		break;
	default:
		return NULL;
	}

	return resp;
}

void StructureManagerAdapter::error(const String& message) {
	return ((StructureManagerImplementation*) impl)->error(message);
}

void StructureManagerAdapter::info(const String& message) {
	return ((StructureManagerImplementation*) impl)->info(message);
}

/*
 *	StructureManagerHelper
 */

StructureManagerHelper* StructureManagerHelper::staticInitializer = StructureManagerHelper::instance();

StructureManagerHelper::StructureManagerHelper() {
	className = "StructureManager";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void StructureManagerHelper::finalizeHelper() {
	StructureManagerHelper::finalize();
}

DistributedObject* StructureManagerHelper::instantiateObject() {
	return new StructureManager(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* StructureManagerHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new StructureManagerAdapter((StructureManagerImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

/*
 *	StructureManagerServant
 */

StructureManagerServant::StructureManagerServant() {
	_classHelper = StructureManagerHelper::instance();
}

StructureManagerServant::~StructureManagerServant() {
}

void StructureManagerServant::_setStub(DistributedObjectStub* stub) {
	_this = (StructureManager*) stub;
}

DistributedObjectStub* StructureManagerServant::_getStub() {
	return _this;
}

