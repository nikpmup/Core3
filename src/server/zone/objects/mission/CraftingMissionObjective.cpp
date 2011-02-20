/*
 *	server/zone/objects/mission/CraftingMissionObjective.cpp generated by engine3 IDL compiler 0.60
 */

#include "CraftingMissionObjective.h"

#include "server/zone/objects/mission/MissionObject.h"

#include "server/zone/objects/mission/MissionObserver.h"

#include "server/zone/objects/area/MissionSpawnActiveArea.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/templates/SharedObjectTemplate.h"

/*
 *	CraftingMissionObjectiveStub
 */

CraftingMissionObjective::CraftingMissionObjective(MissionObject* mission) : MissionObjective(DummyConstructorParameter::instance()) {
	CraftingMissionObjectiveImplementation* _implementation = new CraftingMissionObjectiveImplementation(mission);
	_impl = _implementation;
	_impl->_setStub(this);
}

CraftingMissionObjective::CraftingMissionObjective(DummyConstructorParameter* param) : MissionObjective(param) {
}

CraftingMissionObjective::~CraftingMissionObjective() {
}


void CraftingMissionObjective::initializeTransientMembers() {
	CraftingMissionObjectiveImplementation* _implementation = (CraftingMissionObjectiveImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);

		method.executeWithVoidReturn();
	} else
		_implementation->initializeTransientMembers();
}

void CraftingMissionObjective::activate() {
	CraftingMissionObjectiveImplementation* _implementation = (CraftingMissionObjectiveImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);

		method.executeWithVoidReturn();
	} else
		_implementation->activate();
}

void CraftingMissionObjective::abort() {
	CraftingMissionObjectiveImplementation* _implementation = (CraftingMissionObjectiveImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);

		method.executeWithVoidReturn();
	} else
		_implementation->abort();
}

void CraftingMissionObjective::complete() {
	CraftingMissionObjectiveImplementation* _implementation = (CraftingMissionObjectiveImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);

		method.executeWithVoidReturn();
	} else
		_implementation->complete();
}

int CraftingMissionObjective::notifyObserverEvent(MissionObserver* observer, unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2) {
	CraftingMissionObjectiveImplementation* _implementation = (CraftingMissionObjectiveImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 10);
		method.addObjectParameter(observer);
		method.addUnsignedIntParameter(eventType);
		method.addObjectParameter(observable);
		method.addObjectParameter(arg1);
		method.addSignedLongParameter(arg2);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->notifyObserverEvent(observer, eventType, observable, arg1, arg2);
}

DistributedObjectServant* CraftingMissionObjective::_getImplementation() {

	_updated = true;
	return _impl;
}

void CraftingMissionObjective::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	CraftingMissionObjectiveImplementation
 */

CraftingMissionObjectiveImplementation::CraftingMissionObjectiveImplementation(DummyConstructorParameter* param) : MissionObjectiveImplementation(param) {
	_initializeImplementation();
}


CraftingMissionObjectiveImplementation::~CraftingMissionObjectiveImplementation() {
	CraftingMissionObjectiveImplementation::finalize();
}


void CraftingMissionObjectiveImplementation::_initializeImplementation() {
	_setClassHelper(CraftingMissionObjectiveHelper::instance());

	_serializationHelperMethod();
	_serializationHelperMethod();
}

void CraftingMissionObjectiveImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (CraftingMissionObjective*) stub;
	MissionObjectiveImplementation::_setStub(stub);
}

DistributedObjectStub* CraftingMissionObjectiveImplementation::_getStub() {
	return _this;
}

CraftingMissionObjectiveImplementation::operator const CraftingMissionObjective*() {
	return _this;
}

void CraftingMissionObjectiveImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void CraftingMissionObjectiveImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void CraftingMissionObjectiveImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void CraftingMissionObjectiveImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void CraftingMissionObjectiveImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void CraftingMissionObjectiveImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void CraftingMissionObjectiveImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void CraftingMissionObjectiveImplementation::_serializationHelperMethod() {
	MissionObjectiveImplementation::_serializationHelperMethod();

	_setClassName("CraftingMissionObjective");

}

void CraftingMissionObjectiveImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint16 _varSize = stream->readShort();

		int _currentOffset = stream->getOffset();

		if(CraftingMissionObjectiveImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool CraftingMissionObjectiveImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (MissionObjectiveImplementation::readObjectMember(stream, _name))
		return true;


	return false;
}

void CraftingMissionObjectiveImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = CraftingMissionObjectiveImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int CraftingMissionObjectiveImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	String _name;
	int _offset;
	uint16 _totalSize;

	return 0 + MissionObjectiveImplementation::writeObjectMembers(stream);
}

CraftingMissionObjectiveImplementation::CraftingMissionObjectiveImplementation(MissionObject* mission) : MissionObjectiveImplementation(mission) {
	_initializeImplementation();
	// server/zone/objects/mission/CraftingMissionObjective.idl():  		Logger.setLoggingName("CraftingMissionObjective");
	Logger::setLoggingName("CraftingMissionObjective");
}

void CraftingMissionObjectiveImplementation::finalize() {
}

void CraftingMissionObjectiveImplementation::initializeTransientMembers() {
	// server/zone/objects/mission/CraftingMissionObjective.idl():  		super.initializeTransientMembers();
	MissionObjectiveImplementation::initializeTransientMembers();
	// server/zone/objects/mission/CraftingMissionObjective.idl():  		Logger.setLoggingName("MissionObject");
	Logger::setLoggingName("MissionObject");
	// server/zone/objects/mission/CraftingMissionObjective.idl():  		activate();
	activate();
}

/*
 *	CraftingMissionObjectiveAdapter
 */

CraftingMissionObjectiveAdapter::CraftingMissionObjectiveAdapter(CraftingMissionObjectiveImplementation* obj) : MissionObjectiveAdapter(obj) {
}

enum {RPC_FINALIZE__ = 6,RPC_INITIALIZETRANSIENTMEMBERS__,RPC_ACTIVATE__,RPC_ABORT__,RPC_COMPLETE__,RPC_NOTIFYOBSERVEREVENT__MISSIONOBSERVER_INT_OBSERVABLE_MANAGEDOBJECT_LONG_};

Packet* CraftingMissionObjectiveAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case RPC_FINALIZE__:
		finalize();
		break;
	case RPC_INITIALIZETRANSIENTMEMBERS__:
		initializeTransientMembers();
		break;
	case RPC_ACTIVATE__:
		activate();
		break;
	case RPC_ABORT__:
		abort();
		break;
	case RPC_COMPLETE__:
		complete();
		break;
	case RPC_NOTIFYOBSERVEREVENT__MISSIONOBSERVER_INT_OBSERVABLE_MANAGEDOBJECT_LONG_:
		resp->insertSignedInt(notifyObserverEvent((MissionObserver*) inv->getObjectParameter(), inv->getUnsignedIntParameter(), (Observable*) inv->getObjectParameter(), (ManagedObject*) inv->getObjectParameter(), inv->getSignedLongParameter()));
		break;
	default:
		return NULL;
	}

	return resp;
}

void CraftingMissionObjectiveAdapter::finalize() {
	((CraftingMissionObjectiveImplementation*) impl)->finalize();
}

void CraftingMissionObjectiveAdapter::initializeTransientMembers() {
	((CraftingMissionObjectiveImplementation*) impl)->initializeTransientMembers();
}

void CraftingMissionObjectiveAdapter::activate() {
	((CraftingMissionObjectiveImplementation*) impl)->activate();
}

void CraftingMissionObjectiveAdapter::abort() {
	((CraftingMissionObjectiveImplementation*) impl)->abort();
}

void CraftingMissionObjectiveAdapter::complete() {
	((CraftingMissionObjectiveImplementation*) impl)->complete();
}

int CraftingMissionObjectiveAdapter::notifyObserverEvent(MissionObserver* observer, unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2) {
	return ((CraftingMissionObjectiveImplementation*) impl)->notifyObserverEvent(observer, eventType, observable, arg1, arg2);
}

/*
 *	CraftingMissionObjectiveHelper
 */

CraftingMissionObjectiveHelper* CraftingMissionObjectiveHelper::staticInitializer = CraftingMissionObjectiveHelper::instance();

CraftingMissionObjectiveHelper::CraftingMissionObjectiveHelper() {
	className = "CraftingMissionObjective";

	Core::getObjectBroker()->registerClass(className, this);
}

void CraftingMissionObjectiveHelper::finalizeHelper() {
	CraftingMissionObjectiveHelper::finalize();
}

DistributedObject* CraftingMissionObjectiveHelper::instantiateObject() {
	return new CraftingMissionObjective(DummyConstructorParameter::instance());
}

DistributedObjectServant* CraftingMissionObjectiveHelper::instantiateServant() {
	return new CraftingMissionObjectiveImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* CraftingMissionObjectiveHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new CraftingMissionObjectiveAdapter((CraftingMissionObjectiveImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

